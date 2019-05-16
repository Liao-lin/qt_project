#ifndef MAINWIDGT_H
#define MAINWIDGT_H

#include<QWidget>
#include<QPushButton>
#include"widget.h"
class MainWidget:public QWidget
{
    Q_OBJECT
public:
    MainWidget(QWidget*parent=0);
    ~MainWidget();

    void mySlot();
    void changewindow();
    void changewindow1();
private:
    QPushButton b1;
    QPushButton *b2;
    QPushButton b3;
    Widget a;
};
#endif // MAINWIDGT_H
