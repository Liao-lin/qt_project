#include "shaped.h"
#include "ui_shaped.h"
#include<QPainter>
#include<QImage>
#include<QPixmap>

shaped::shaped(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shaped)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint|windowFlags());
    setAttribute(Qt::WA_TranslucentBackground);
}

shaped::~shaped()
{
    delete ui;
}

void shaped::paintEvent(QPaintEvent *event)
{
    QPainter q(this);
    q.drawPixmap(0,0,QPixmap("../test.jpg"));

}
