#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QFileDialog>
#include<QString>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonread_clicked()
{
    QString path =QFileDialog::getOpenFileName(this,"open","../");
    if(path.isEmpty()==false)
    {
        QFile file(path);
        bool isOk = file.open(QIODevice::ReadOnly);
        if(isOk ==true)
        {
          QByteArray array =file.readAll();
          ui->textEdit->setText(array);
        }
        file.close();
    }

}

void MainWindow::on_buttonwrite_clicked()
{
   QString path=QFileDialog::getSaveFileName(this,"save","../","test(*.txt)");
   if(path.isEmpty()==false)
   {

   }
}
