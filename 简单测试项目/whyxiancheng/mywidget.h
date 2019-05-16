#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QTimer>

namespace Ui {
class myWidget;
}

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = 0);
    ~myWidget();
    void dealTimeout();

private slots:
    void on_pushButton_clicked();

private:
    Ui::myWidget *ui;
    QTimer *myTimer;
};

#endif // MYWIDGET_H
