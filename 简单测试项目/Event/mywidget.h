#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QEvent>
#include<QKeyEvent>

namespace Ui {
class myWidget;
}

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = 0);
    ~myWidget();
protected:
    void closeEvent(QCloseEvent *event);
    void keyPressEvent(QKeyEvent *event);
//    bool event(QEvent *event);
//    void timerEvent(QTimerEvent *event)

private:
    Ui::myWidget *ui;
};

#endif // MYWIDGET_H
