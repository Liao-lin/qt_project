#include "mywidget.h"
#include "ui_mywidget.h"
#include<QDebug>
#include<QKeyEvent>
#include<QTimerEvent>
#include<QPushButton>
#include<QMouseEvent>
#include<QMessageBox>
myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
//    this->startTimer(1);
//    connect(ui->pushButton,&mybutton::clicked,
//            [=]()
//    {
//        qDebug()<<"按钮被按下了";
//    });
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::closeEvent(QCloseEvent *event)
{
    int i = QMessageBox::question(this,"question","关闭不");
    if(i==QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}

void myWidget::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Tab)
        qDebug()<<123;

}

//bool myWidget::event(QEvent *event)
//{
//    if(event->type()==QEvent::KeyPress)
//        qDebug()<<"hello";

//}




//void myWidget::keyPressEvent(QKeyEvent *event)
//{
//    qDebug()<<event->key();
//}
// void myWidget::timerEvent(QTimerEvent *event)
// {
//     static int sec = 0;
//     sec++;
//     ui->label->setText(QString("%1 d").arg(sec));
// }
