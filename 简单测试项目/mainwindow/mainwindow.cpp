#include "mainwindow.h"
#include<QMenuBar>
#include<QAction>
#include<QToolBar>
#include<QPushButton>
#include<QTextEdit>
#include<QDockWidget>
#include<QDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenu *mBar=menuBar()->addMenu("菜单");
    QAction *act=mBar->addAction("新建");
    QToolBar *toolbar = addToolBar("df");
    QToolBar *toolbarq = addToolBar("df");
    toolbar->addAction(act);
    toolbarq->addAction(act);
    QPushButton b;
    b.setText("qwe");
    toolbar->addWidget(&b);
    connect(
               &b,&QPushButton::clicked,
            [&]()
    {
        b.setText("asd");
    }
    );
    QDockWidget *dock =new QDockWidget(this);
    addDockWidget(Qt::LeftDockWidgetArea,dock);
    dock->resize(100,100);
    QTextEdit *edit =new QTextEdit("sss",this);
    dock->setWidget(edit);


}

MainWindow::~MainWindow()
{

}
