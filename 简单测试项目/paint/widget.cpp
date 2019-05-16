#include "widget.h"
#include "ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    x = 0;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter q(this);
    q.drawPixmap(x,180,80,80,QPixmap("../test.jpg"));

}

void Widget::on_pushButton_clicked()
{
    x+=20;
    if(x>width())
    {
        x=0;
    }
 update();
}
