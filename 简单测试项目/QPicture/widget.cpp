#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPicture>
#include<QPixmap>
#include<QImage>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QPixmap pixmap;
    pixmap.load("../test.jpg");
    QImage tempImage =pixmap.toImage();
    p.drawImage(0,0,tempImage);

    QImage image;
    image.load("../test.jpg");
    QPixmap t=QPixmap::fromImage(image);
    p.drawPixmap(0,333,t);


}
