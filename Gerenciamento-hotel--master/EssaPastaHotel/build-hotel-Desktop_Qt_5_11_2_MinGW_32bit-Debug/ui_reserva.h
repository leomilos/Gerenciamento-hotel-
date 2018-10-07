/********************************************************************************
** Form generated from reading UI file 'reserva.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVA_H
#define UI_RESERVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reserva
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *reserva)
    {
        if (reserva->objectName().isEmpty())
            reserva->setObjectName(QStringLiteral("reserva"));
        reserva->resize(385, 263);
        centralwidget = new QWidget(reserva);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 50, 141, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 111, 16));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 130, 141, 71));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 50, 141, 71));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 130, 141, 71));
        reserva->setCentralWidget(centralwidget);
        menubar = new QMenuBar(reserva);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 385, 21));
        reserva->setMenuBar(menubar);
        statusbar = new QStatusBar(reserva);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        reserva->setStatusBar(statusbar);

        retranslateUi(reserva);

        QMetaObject::connectSlotsByName(reserva);
    } // setupUi

    void retranslateUi(QMainWindow *reserva)
    {
        reserva->setWindowTitle(QApplication::translate("reserva", "MainWindow", nullptr));
        pushButton_2->setText(QApplication::translate("reserva", "Lavanderia", nullptr));
        label->setText(QApplication::translate("reserva", "Reservas e Servicos", nullptr));
        pushButton_3->setText(QApplication::translate("reserva", "Restaurtante", nullptr));
        pushButton_4->setText(QApplication::translate("reserva", "Sauna", nullptr));
        pushButton_5->setText(QApplication::translate("reserva", "Massagem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reserva: public Ui_reserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVA_H
