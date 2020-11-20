/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_3;
    QComboBox *PortBox;
    QLabel *label_4;
    QComboBox *BaudBox;
    QLabel *label_5;
    QComboBox *BitNumBox;
    QLabel *label_6;
    QComboBox *ParityBox;
    QLabel *label_7;
    QComboBox *StopBox;
    QPushButton *openButton;
    QPushButton *showButton;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1169, 920);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 130, 631, 411));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(710, 60, 60, 21));
        PortBox = new QComboBox(centralwidget);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setGeometry(QRect(770, 60, 91, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(710, 90, 60, 21));
        BaudBox = new QComboBox(centralwidget);
        BaudBox->addItem(QString());
        BaudBox->addItem(QString());
        BaudBox->addItem(QString());
        BaudBox->addItem(QString());
        BaudBox->addItem(QString());
        BaudBox->setObjectName(QStringLiteral("BaudBox"));
        BaudBox->setGeometry(QRect(770, 90, 91, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(710, 110, 60, 36));
        BitNumBox = new QComboBox(centralwidget);
        BitNumBox->addItem(QString());
        BitNumBox->setObjectName(QStringLiteral("BitNumBox"));
        BitNumBox->setGeometry(QRect(770, 120, 91, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(710, 140, 60, 37));
        ParityBox = new QComboBox(centralwidget);
        ParityBox->addItem(QString());
        ParityBox->setObjectName(QStringLiteral("ParityBox"));
        ParityBox->setGeometry(QRect(770, 150, 91, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(710, 170, 60, 36));
        StopBox = new QComboBox(centralwidget);
        StopBox->addItem(QString());
        StopBox->addItem(QString());
        StopBox->setObjectName(QStringLiteral("StopBox"));
        StopBox->setGeometry(QRect(770, 180, 89, 21));
        openButton = new QPushButton(centralwidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(700, 510, 161, 28));
        showButton = new QPushButton(centralwidget);
        showButton->setObjectName(QStringLiteral("showButton"));
        showButton->setGeometry(QRect(700, 560, 161, 28));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 60, 631, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 61, 21));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(60, 560, 631, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1169, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        BaudBox->setItemText(0, QApplication::translate("MainWindow", "1200", nullptr));
        BaudBox->setItemText(1, QApplication::translate("MainWindow", "2400", nullptr));
        BaudBox->setItemText(2, QApplication::translate("MainWindow", "4800", nullptr));
        BaudBox->setItemText(3, QApplication::translate("MainWindow", "9600", nullptr));
        BaudBox->setItemText(4, QApplication::translate("MainWindow", "15200", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        BitNumBox->setItemText(0, QApplication::translate("MainWindow", "8", nullptr));

        label_6->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        ParityBox->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));

        label_7->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        StopBox->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        StopBox->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));

        openButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        showButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\235\220\346\240\207", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
