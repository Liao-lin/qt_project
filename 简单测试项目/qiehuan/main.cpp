#include "widget.h"
#include"mainwidget.h"
#include <QApplication>
#include<QMessageBox>
#include<QMessageBox>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setDetailedText("Differences here...");
    msgBox.setStandardButtons(QMessageBox::Save
                              | QMessageBox::Discard
                              | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Save:
        qDebug() << "Save document!";
        break;
    case QMessageBox::Discard:
        qDebug() << "Discard changes!";
        break;
    case QMessageBox::Cancel:
        qDebug() << "Close document!";
        break;
    }
    return a.exec();
}
