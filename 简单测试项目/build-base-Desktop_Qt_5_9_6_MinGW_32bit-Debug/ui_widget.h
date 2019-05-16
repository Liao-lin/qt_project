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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *buttonDel;
    QPushButton *buttonSure;
    QPushButton *buttonCancel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 131, 41));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(215, 60, 141, 21));
        buttonDel = new QPushButton(Widget);
        buttonDel->setObjectName(QStringLiteral("buttonDel"));
        buttonDel->setGeometry(QRect(60, 130, 64, 28));
        buttonSure = new QPushButton(Widget);
        buttonSure->setObjectName(QStringLiteral("buttonSure"));
        buttonSure->setGeometry(QRect(180, 130, 64, 28));
        buttonCancel = new QPushButton(Widget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(300, 130, 64, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\220\215\345\255\227", Q_NULLPTR));
        buttonDel->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", Q_NULLPTR));
        buttonSure->setText(QApplication::translate("Widget", "\347\241\256\345\256\232\345\210\240\351\231\244", Q_NULLPTR));
        buttonCancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
