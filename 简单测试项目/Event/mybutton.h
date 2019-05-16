#ifndef MYBUTTON_H
#define MYBUTTON_H
#include<QMouseEvent>
#include <QPushButton>

class mybutton : public QPushButton
{
    Q_OBJECT
public:
    explicit mybutton(QWidget *parent = nullptr);

void mousePressEvent(QMouseEvent *event);

public slots:
};

#endif // MYBUTTON_H
