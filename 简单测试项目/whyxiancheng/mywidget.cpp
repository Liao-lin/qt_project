#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    myTimer = new QTimer(this);
    connect(myTimer,&QTimer::timeout,this,&myWidget::dealTimeout);

}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::dealTimeout()
{
   static int i=0;
   i++;
   ui->lcdNumber->display(i);
}

void myWidget::on_pushButton_clicked()
{
    if(myTimer->isActive()==false)
    {
        myTimer->start(100);
    }
    myTimer->stop();

}
