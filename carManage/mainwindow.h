#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void connectDb();
    void initDate();
    ~MainWindow();

private slots:
    void on_actioncar_triggered();

    void on_actioncalc_triggered();

    void on_comboBoxFactory_currentIndexChanged(const QString &arg1);

    void on_comboBoxBrand_currentIndexChanged(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButtonCal_clicked();

    void on_pushButtonSure_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
