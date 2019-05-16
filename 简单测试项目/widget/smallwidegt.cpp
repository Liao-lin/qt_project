#include "smallwidegt.h"
#include<QSlider>
#include<QSpinBox>
#include<QHBoxLayout>
smallwidegt::smallwidegt(QWidget *parent) : QWidget(parent)
{
    QSlider *slider =new QSlider(Qt::Vertical,this);
    QSpinBox *spinbox = new QSpinBox(this);
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(slider);
    layout->addWidget(spinbox);
    connect(slider,QSlider::valueChanged,spinbox,QSpinBox::setValue);
}
