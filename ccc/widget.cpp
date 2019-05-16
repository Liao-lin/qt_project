#include "widget.h"
#include "ui_widget.h"
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQuery>
#include<QVariantList>
#include<QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QSqlDatabase a = QSqlDatabase::addDatabase("QSQLITE");
    a.setDatabaseName("i");

     if(!a.open())
     {
         QMessageBox::warning(this,"错误",a.lastError().text(),
                              QMessageBox::Ok);
         return;
     }

     QSqlQuery query;
     query.exec("create table student(id int primary key ,name varchar(255),age int,score int);");
     query.exec("insert into student(id,name,age,score) values(1,'sds',12,11);");
     query.prepare("insert into student (name,age,score) values(?,?,?);");
     QVariantList nameList;
     nameList<<"xiaolong"<<"xiaoming"<<"xiaohong";
     QVariantList ageList;
     ageList<<11<<12<<23;
     QVariantList scoreList;
     scoreList<<1<<3<<5;
     query.addBindValue(nameList);
     query.addBindValue(ageList);
     query.addBindValue(scoreList);
     query.execBatch();
//     query.exec("delete age form student");
//      query.exec("select * from student");
//      while(query.next())
//      {
//          qDebug()<<query.value("name").toString()<<query.value(3).toInt();
//      }



//     QSqlDatabase b =QSqlDatabase::addDatabase("QSQLITE");
//     b.setDatabaseName("tst");
//     if(!a.open())
//     {
//         QMessageBox::warning(this,"错误",a.lastError().text(),
//                              QMessageBox::Ok);
//         return;
//     }
//     QSqlQuery que(b);
//     que.exec("create table class(id int,name varchar(255));");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_buttonDel_clicked()
{
    QString name =ui->lineEdit->text();
    QString str =QString("delete from student where name = '%1'").arg(name);
    QSqlDatabase::database().transaction();
    QSqlQuery query;
    query.exec(str);
}

void Widget::on_buttonSure_clicked()
{
     QSqlDatabase::database().commit();
}

void Widget::on_pushButton_3_clicked()
{
     QSqlDatabase::database().rollback();
}
