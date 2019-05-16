#include "widget.h"
#include "ui_widget.h"
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQuery>
#include<QVariantList>
#include<QString>
#include<QSqlRecord>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QSqlDatabase a = QSqlDatabase::addDatabase("QSQLITE");   //创建数据库
    a.setDatabaseName("info");    //绑定数据库名称

    if(!a.open())
     {
         QMessageBox::warning(this,"错误",a.lastError().text(),
                              QMessageBox::Ok);
         return;
     }

    model = new QSqlTableModel(this);
    model->setTable("student");           //指定使用哪一个表
    ui->tableView->setModel(model);       //每个view对应一个model
    model->setHeaderData(0,Qt::Horizontal,"学号");   //第0列设置别名
    model->select();   //显示所有的列

    model->setEditStrategy(QSqlTableModel::OnManualSubmit);//设置手动提交后才可以修改

    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //    设置view不可修改
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_buttonDel_clicked() //再最后一行添加空记录
{
    QSqlRecord record = model->record();//获取空记录行
    int row = model->rowCount(); //获取当前的行号
    model->insertRecord(row,record);  //  插入行
}

void Widget::on_buttonSure_clicked()
{
    model->submitAll();//设置手动提交后，该键点击后会提交在view中的修改内容
}

void Widget::on_buttonCancel_clicked()
{
    model->revertAll();//取消所有的动作
    model->submitAll();//提交动作
}

void Widget::on_buttonAdd_clicked()
{
    //获取圈选的模型
    QItemSelectionModel *sModel = ui->tableView->selectionModel();
    QModelIndexList list = sModel->selectedRows();//取出模型中的索引
    for(int i=0;i<list.size();i++)//删除选中的行
    {
        model->removeRow(list.at(i).row());
    }



}

void Widget::on_pushButton_5_clicked()   //查找
{
    QString str = ui->lineEdit->text();
    QString sname = QString("name = '%1'").arg(str);//打包
    model->setFilter(sname);
    model->select();      //再次显示一次
}
