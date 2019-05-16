#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void myslot();
    ~Widget();
private:

    QPushButton b4;
signals:
    void mySignal();
};

#endif // WIDGET_H
