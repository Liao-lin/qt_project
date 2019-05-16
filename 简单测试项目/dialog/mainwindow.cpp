#include "mainwindow.h"
#include<QMenu>
#include<QMenuBar>
#include<QAction>
#include<QDialog>
#include<QDebug>
#include<QMessageBox>
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    QMenuBar * menubar =menuBar();
    QMenu * menu1=new QMenu("对话框",this);
    menubar->addMenu(menu1);
    QAction *act =new QAction("模态对话框",this);
    menu1->addAction(act);
    connect(act,QAction::triggered,[=](){QMessageBox::about(this,"about","nih");
    });

}

MainWindow::~MainWindow()
{
}
