/********************************************************************************
** Form generated from reading UI file 'reservasdiversas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVASDIVERSAS_H
#define UI_RESERVASDIVERSAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reservasDiversas
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QRadioButton *rbLavanderia;
    QRadioButton *rbAcademia;
    QRadioButton *rbMassagem;
    QRadioButton *rbRestaurante;
    QLabel *label;
    QPushButton *btnCancelar;
    QPushButton *btnReservar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *reservasDiversas)
    {
        if (reservasDiversas->objectName().isEmpty())
            reservasDiversas->setObjectName(QStringLiteral("reservasDiversas"));
        reservasDiversas->resize(275, 208);
        centralwidget = new QWidget(reservasDiversas);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 241, 71));
        rbLavanderia = new QRadioButton(groupBox);
        rbLavanderia->setObjectName(QStringLiteral("rbLavanderia"));
        rbLavanderia->setGeometry(QRect(20, 20, 111, 21));
        rbAcademia = new QRadioButton(groupBox);
        rbAcademia->setObjectName(QStringLiteral("rbAcademia"));
        rbAcademia->setGeometry(QRect(20, 40, 111, 21));
        rbMassagem = new QRadioButton(groupBox);
        rbMassagem->setObjectName(QStringLiteral("rbMassagem"));
        rbMassagem->setGeometry(QRect(140, 40, 111, 21));
        rbRestaurante = new QRadioButton(groupBox);
        rbRestaurante->setObjectName(QStringLiteral("rbRestaurante"));
        rbRestaurante->setGeometry(QRect(140, 20, 111, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 16));
        btnCancelar = new QPushButton(centralwidget);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));
        btnCancelar->setGeometry(QRect(20, 130, 75, 23));
        btnReservar = new QPushButton(centralwidget);
        btnReservar->setObjectName(QStringLiteral("btnReservar"));
        btnReservar->setGeometry(QRect(180, 130, 75, 23));
        reservasDiversas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(reservasDiversas);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 275, 21));
        reservasDiversas->setMenuBar(menubar);
        statusbar = new QStatusBar(reservasDiversas);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        reservasDiversas->setStatusBar(statusbar);

        retranslateUi(reservasDiversas);

        QMetaObject::connectSlotsByName(reservasDiversas);
    } // setupUi

    void retranslateUi(QMainWindow *reservasDiversas)
    {
        reservasDiversas->setWindowTitle(QApplication::translate("reservasDiversas", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("reservasDiversas", "GroupBox", nullptr));
        rbLavanderia->setText(QApplication::translate("reservasDiversas", "Lavanderia", nullptr));
        rbAcademia->setText(QApplication::translate("reservasDiversas", "Academia", nullptr));
        rbMassagem->setText(QApplication::translate("reservasDiversas", "Massagem", nullptr));
        rbRestaurante->setText(QApplication::translate("reservasDiversas", "Restaurante", nullptr));
        label->setText(QApplication::translate("reservasDiversas", "Escolha a Reserva", nullptr));
        btnCancelar->setText(QApplication::translate("reservasDiversas", "Cancelar", nullptr));
        btnReservar->setText(QApplication::translate("reservasDiversas", "Reservar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reservasDiversas: public Ui_reservasDiversas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVASDIVERSAS_H
