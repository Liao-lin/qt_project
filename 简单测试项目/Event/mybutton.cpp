#include "mybutton.h"
#include<QPushButton>
#include<QDebug>
mybutton::mybutton(QWidget *parent) : QPushButton(parent)
{
    connect(this,&mybutton::clicked,
            [=]()
    {
        qDebug()<<"按钮被按下了";
    });
}

void mybutton::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==
            Qt::LeftButton)
    {
        qDebug()<<"按下的是左键";
        QPushButton::mousePressEvent(event);
    }


}
