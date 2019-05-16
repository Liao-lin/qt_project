/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actioncar;
    QAction *actioncalc;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *car;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *widget;
    QComboBox *comboBoxFactory;
    QLabel *label_2;
    QComboBox *comboBoxBrand;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditPrice;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEditTotal;
    QLabel *label_10;
    QPushButton *pushButtonSure;
    QPushButton *pushButtonCal;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLabel *label_7;
    QLabel *labelLast;
    QWidget *page_2;
    QTextEdit *textEdit;
    QWidget *calc;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(961, 565);
        actioncar = new QAction(MainWindow);
        actioncar->setObjectName(QStringLiteral("actioncar"));
        actioncalc = new QAction(MainWindow);
        actioncalc->setObjectName(QStringLiteral("actioncalc"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        car = new QWidget();
        car->setObjectName(QStringLiteral("car"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Myungjo Std M"));
        font.setPointSize(24);
        car->setFont(font);
        gridLayout_2 = new QGridLayout(car);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(car);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(300, 0));
        QFont font1;
        font1.setPointSize(12);
        toolBox->setFont(font1);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 300, 331));
        comboBoxFactory = new QComboBox(widget);
        comboBoxFactory->setObjectName(QStringLiteral("comboBoxFactory"));
        comboBoxFactory->setGeometry(QRect(80, 10, 122, 27));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 15, 40, 20));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 20));
        comboBoxBrand = new QComboBox(widget);
        comboBoxBrand->setObjectName(QStringLiteral("comboBoxBrand"));
        comboBoxBrand->setGeometry(QRect(80, 60, 122, 27));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 40, 20));
        label_4->setMaximumSize(QSize(16777215, 20));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 278, 57));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEditPrice = new QLineEdit(layoutWidget);
        lineEditPrice->setObjectName(QStringLiteral("lineEditPrice"));

        horizontalLayout_4->addWidget(lineEditPrice);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 220, 278, 56));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        lineEditTotal = new QLineEdit(layoutWidget1);
        lineEditTotal->setObjectName(QStringLiteral("lineEditTotal"));

        horizontalLayout_2->addWidget(lineEditTotal);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        pushButtonSure = new QPushButton(widget);
        pushButtonSure->setObjectName(QStringLiteral("pushButtonSure"));
        pushButtonSure->setGeometry(QRect(30, 290, 93, 28));
        pushButtonCal = new QPushButton(widget);
        pushButtonCal->setObjectName(QStringLiteral("pushButtonCal"));
        pushButtonCal->setGeometry(QRect(170, 290, 93, 28));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 180, 224, 29));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        labelLast = new QLabel(widget1);
        labelLast->setObjectName(QStringLiteral("labelLast"));

        horizontalLayout->addWidget(labelLast);

        toolBox->addItem(widget, QString::fromUtf8("\345\207\272\345\224\256\350\275\246\350\276\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 300, 331));
        toolBox->addItem(page_2, QString::fromUtf8("\346\226\260\350\275\246\345\205\245\345\272\223"));
        splitter->addWidget(toolBox);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);
        splitter->addWidget(textEdit);

        gridLayout_2->addWidget(splitter, 0, 1, 1, 1);

        stackedWidget->addWidget(car);
        calc = new QWidget();
        calc->setObjectName(QStringLiteral("calc"));
        stackedWidget->addWidget(calc);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(380, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font2.setPointSize(24);
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(379, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actioncar);
        menu->addAction(actioncalc);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actioncar->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", Q_NULLPTR));
        actioncalc->setText(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\237\350\256\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\223\201\347\211\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\212\245\344\273\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\207", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\351\207\221\351\242\235", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\344\270\207", Q_NULLPTR));
        pushButtonSure->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButtonCal->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\225\260\351\207\217", Q_NULLPTR));
        labelLast->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(widget), QApplication::translate("MainWindow", "\345\207\272\345\224\256\350\275\246\350\276\206", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\346\226\260\350\275\246\345\205\245\345\272\223", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
