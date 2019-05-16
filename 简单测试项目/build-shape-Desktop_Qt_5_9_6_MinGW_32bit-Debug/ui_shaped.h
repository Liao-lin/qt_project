/********************************************************************************
** Form generated from reading UI file 'shaped.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPED_H
#define UI_SHAPED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shaped
{
public:

    void setupUi(QWidget *shaped)
    {
        if (shaped->objectName().isEmpty())
            shaped->setObjectName(QStringLiteral("shaped"));
        shaped->resize(400, 300);

        retranslateUi(shaped);

        QMetaObject::connectSlotsByName(shaped);
    } // setupUi

    void retranslateUi(QWidget *shaped)
    {
        shaped->setWindowTitle(QApplication::translate("shaped", "shaped", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shaped: public Ui_shaped {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPED_H
