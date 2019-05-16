#include"mainwidget.h"
#include<QPushButton>

MainWidget::MainWidget(QWidget *parent):QWidget(parent)
{
    b1.setParent(this);
    b1.setText("hhh");
    b1.move(100,100);
    b2 = new QPushButton(this);
    b2->setText("abc");
    connect(&b1,QPushButton::clicked,this,MainWidget::close);
    connect(b2,QPushButton::released,&b1,QPushButton::hide);
    setWindowTitle("主窗口");
    b3.setParent(this);
    b3.move(50,40);
    b3.setText("子窗口切换");
    connect(&b3,&QPushButton::clicked,this,&MainWidget::changewindow);
    connect(&a,Widget::mySignal,this,&MainWidget::changewindow1);
}
MainWidget::~MainWidget()
{

}
void MainWidget::changewindow()
{
    this->close();
    a.show();

}
void MainWidget:: changewindow1()
{
    a.close();
    this->show();
}
