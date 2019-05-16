/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *buttonDel;
    QPushButton *buttonAdd;
    QPushButton *buttonSure;
    QPushButton *buttonCancel;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(479, 421);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(Widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 6);

        buttonDel = new QPushButton(Widget);
        buttonDel->setObjectName(QStringLiteral("buttonDel"));

        gridLayout->addWidget(buttonDel, 1, 0, 1, 1);

        buttonAdd = new QPushButton(Widget);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        gridLayout->addWidget(buttonAdd, 1, 1, 1, 2);

        buttonSure = new QPushButton(Widget);
        buttonSure->setObjectName(QStringLiteral("buttonSure"));

        gridLayout->addWidget(buttonSure, 1, 3, 1, 1);

        buttonCancel = new QPushButton(Widget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        gridLayout->addWidget(buttonCancel, 1, 4, 1, 2);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 2, 3);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 2, 1, 3);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 3, 5, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        buttonDel->setText(QApplication::translate("Widget", "\345\242\236\345\212\240", Q_NULLPTR));
        buttonAdd->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", Q_NULLPTR));
        buttonSure->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", Q_NULLPTR));
        buttonCancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\346\211\276\347\232\204\344\272\272", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "\346\237\245\346\211\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
