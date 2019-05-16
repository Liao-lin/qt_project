#include "widget.h"
#include "ui_widget.h"
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQuery>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
   QSqlDatabase a = QSqlDatabase::addDatabase("QSQLITE");
//    a.setHostName("127.0.0.1");
//    a.setUserName("root");
//    a.setPassword("bat123");
   a.setDatabaseName("info");

    if(!a.open())
    {
        QMessageBox::warning(this,"错误",a.lastError().text(),
                             QMessageBox::Ok);
        return;
    }

    //QSqlQuery query;
    //query.exec("create table student(id int,name varchar(255),age int,score int");
}

Widget::~Widget()
{
    delete ui;
}
