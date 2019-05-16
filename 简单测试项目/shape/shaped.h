#ifndef SHAPED_H
#define SHAPED_H

#include <QWidget>
#include<QPaintEvent>

namespace Ui {
class shaped;
}

class shaped : public QWidget
{
    Q_OBJECT

public:
    explicit shaped(QWidget *parent = 0);
    ~shaped();
 protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::shaped *ui;
};

#endif // SHAPED_H
