#include "widget.h"
#include "ui_widget.h"
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QSqlDatabase a = QSqlDatabase::addDatabase("QSQLITE");

    a.setDatabaseName("info");

    if(!a.open())
    {
        QMessageBox::warning(this,"错误",a.lastError().text(),
                             QMessageBox::Ok);
        return;
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_buttonDel_clicked()
{

}
