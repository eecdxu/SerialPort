/********************************************************************************
** Form generated from reading UI file 'coordinate.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COORDINATE_H
#define UI_COORDINATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Coordinate
{
public:

    void setupUi(QWidget *Coordinate)
    {
        if (Coordinate->objectName().isEmpty())
            Coordinate->setObjectName(QStringLiteral("Coordinate"));
        Coordinate->resize(400, 300);

        retranslateUi(Coordinate);

        QMetaObject::connectSlotsByName(Coordinate);
    } // setupUi

    void retranslateUi(QWidget *Coordinate)
    {
        Coordinate->setWindowTitle(QApplication::translate("Coordinate", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Coordinate: public Ui_Coordinate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COORDINATE_H
