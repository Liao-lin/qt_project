#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QString>
#include<QStringList>
#include<QListView>
#include<QStringListModel>
#include<QPushButton>
#include<QLayout>

void asd(QString a);
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

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    asd("s");
}

void asd(QString a)
{
    qDebug()<<"123";
}
