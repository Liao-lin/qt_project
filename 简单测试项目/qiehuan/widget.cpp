#include "widget.h"
#include "ui_widget.h"
#include"mainwidget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle("子窗口");
    b4.setParent(this);
    b4.setText("切换到主窗口");
    connect(&b4,&QPushButton::clicked,this,Widget::myslot);

}
Widget::~Widget()
{

}
void Widget::myslot()
{
    emit mySignal();
}
