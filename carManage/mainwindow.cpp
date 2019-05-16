#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "domxml.h"

#include<QSqlDatabase>
#include<QSqlError>
#include<QMessageBox>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QString>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_actioncar_triggered();//显示车辆管理页面
    connectDb();             //连接数据库
    initDate();

    DomXML::createXML("./demo.xml");    //创建xml文件

//    QStringList list;
//    list<<"十年来"<<"毕加索"<<"11"<<"33"<<"11";
//    DomXML::appendXML("./demo.xml",list);
}

//连接数据库
void MainWindow::connectDb()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("car.db");
    if(!db.open())
    {
        QMessageBox::warning(this,"数据库的错误",db.lastError().text());
        return;
    }
}

void MainWindow::initDate()    //初始数据
{
    QSqlQueryModel *queryModel = new QSqlQueryModel;
    ui->toolBox->setCurrentIndex(0);
    queryModel->setQuery("select name from factory"); //用模型来进行数据存储
    ui->comboBoxFactory->setModel(queryModel);        //初始化下拉框数据
    ui->labelLast->setText("0");           //初始化剩余车辆
    ui->lineEditTotal->setEnabled(false);    //将总数设置为只读
    ui->lineEditPrice->setEnabled(false);
    ui->pushButtonSure->setEnabled(false);
}



MainWindow::~MainWindow()
{
    delete ui;
}

//设置车辆管理的菜单
void MainWindow::on_actioncar_triggered()
{
   ui->stackedWidget->setCurrentIndex(0);
   ui->label->setText("车辆管理");
}



//设置车辆统计的菜单
void MainWindow::on_actioncalc_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->label->setText("销售统计");
}

//厂家切换时对应的变换槽函数
void MainWindow::on_comboBoxFactory_currentIndexChanged(const QString &arg1)
{
    if(arg1 =="请选择厂家")
    {
        ui->comboBoxBrand->clear();    //品牌下拉框清空
        ui->lineEditPrice->clear();    //报价栏清空
        ui->labelLast->setText("0");
        ui->lineEditTotal->clear();
        ui->spinBox->setValue(0);
        ui->spinBox->setEnabled(false);     //微调框禁止使用
    }
    else
    {
        ui->comboBoxBrand->clear();  //每次操作前进行清空 不然会叠加的
        ui->spinBox->setEnabled(true);
        QSqlQuery query;
        QString sql =QString("select name from brand where factory= '%1'").arg(arg1);
        query.exec(sql);                //执行查找语句
        while (query.next()) {
           QString name = query.value(0).toString();
           ui->comboBoxBrand->addItem(name);
        }
    }
}

//设置剩余以及价格随下拉框的改变而改变
void MainWindow::on_comboBoxBrand_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    QString sql =QString("select price,last from brand where name= '%1'").arg(arg1);
    query.exec(sql);                //执行查找语句
    while (query.next()) {
       QString price = query.value(0).toString();
       QString last =query.value("last").toString();
       ui->lineEditPrice->setText(price);         //设置单辆车报价
       ui->labelLast->setText(last);              //设置剩余车的数目
    }
}

//微调框槽函数
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->pushButtonSure->setEnabled(true);  //激活确定按钮

    //更新剩余数量
    QSqlQuery query;
    QString sql =QString("select last from brand where name= '%1'").
            arg(ui->comboBoxBrand->currentText());//查找当前品牌名
    query.exec(sql);                //执行查找语句
    int last;
    while (query.next()) {
        last =query.value("last").toInt();
        int tempNum =last-arg1;
        //qDebug()<<tempNum;
        if(arg1>last)
        {
            ui->spinBox->setValue(last);
            return;    //如果选定数目大于剩余 则终止
        }
        ui->labelLast->setText(QString::number(tempNum));   //绑定设置剩余数和微调框
    }


    //更新车价的总体金额数目
    int price =ui->lineEditPrice->text().toInt();
    int num = ui->spinBox->text().toInt();
    int total = price*num;
    ui->lineEditTotal->setText(QString::number(total));

}


void MainWindow::on_pushButtonCal_clicked()    //点击取消按钮,不进行数据库操作
{
    on_comboBoxFactory_currentIndexChanged("请选择厂家");//进行回退初始化
    ui->comboBoxFactory->setCurrentText("请选择厂家");   //初始化选择框
}

void MainWindow::on_pushButtonSure_clicked()    //点击确定按钮
{
    int num = ui->spinBox->text().toInt();      //获取销售数量
    int last = ui->labelLast->text().toInt();   //获取剩余数量

    //获取数据库中的销量
    QSqlQuery query;
    QString sql = QString("select sell from brand where name = '%1'").
            arg(ui->comboBoxBrand->currentText());
    int sell;      //销售的数量
    query.exec(sql);
    while (query.next()) {
        sell = query.value("sell").toInt();
    }

    //更新数据库中的销售量和剩余量
    sell = sell + num;
    QString sq = QString("update brand set sell = %1,last =%2 where name ="
                         " '%3'").arg(sell).arg(last)
                         .arg(ui->comboBoxBrand->currentText());
    query.exec(sq);

    //把确认后的数据跟新到xml中
    QStringList list;
    list<<ui->comboBoxFactory->currentText()
       <<ui->comboBoxBrand->currentText()
      <<ui->lineEditPrice->text()
     <<QString::number(num)
    <<ui->lineEditTotal->text();
    DomXML::appendXML("./demo.xml",list);

    QStringList fList;
    QStringList bList;
    QStringList pList;
    QStringList nList;
    QStringList tList;
    DomXML::readXML("./demo.xml",fList,bList,pList,nList,tList);
    int i=fList.size()-1;
    //for(int i=0;i<fList.size();i++)//
    //{
        QString str = QString("%1:%2:卖出了%3，单价：%4，总价：%5")
                .arg(fList.at(i))
                .arg(bList.at(i))
                .arg(nList.at(i))
                .arg(pList.at(i))
                .arg(tList.at(i));
        ui->textEdit->append(str);
   // }


    //按完确定后进行界面初始化
    on_comboBoxFactory_currentIndexChanged("请选择厂家");//进行回退初始化
    ui->comboBoxFactory->setCurrentText("请选择厂家");   //初始化选择框
    ui->pushButtonSure->setEnabled(false);  //淹没确定按钮
    //on_pushButtonCal_clicked()  或者直接调用这个函数
}
