//#include "mainwindow.h"
#include <QApplication>
#include<QEvent>
#include<QTextEdit>
#include<QMainWindow>
#include<QKeyEvent>
#include<QDebug>
class MainWindow : public QMainWindow
 {
 public:
     MainWindow();
 protected:
     bool eventFilter(QObject *obj, QEvent *event);
 private:
     QTextEdit *textEdit;
 };

 MainWindow::MainWindow()
 {
     textEdit = new QTextEdit;
     setCentralWidget(textEdit);

     textEdit->installEventFilter(this);
 }

 bool MainWindow::eventFilter(QObject *obj, QEvent *event)
 {
     if (obj == textEdit) {
         if (event->type() == QEvent::KeyPress) {
             QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
             qDebug() << "Ate key press" << keyEvent->key();
             return true;
         } else {
             return false;
         }
     } else {
         // pass the event on to the parent class
         return QMainWindow::eventFilter(obj, event);
     }
 }
