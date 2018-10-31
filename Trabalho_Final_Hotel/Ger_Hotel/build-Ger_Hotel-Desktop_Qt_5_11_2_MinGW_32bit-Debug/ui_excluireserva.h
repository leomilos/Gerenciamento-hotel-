/********************************************************************************
** Form generated from reading UI file 'excluireserva.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUIRESERVA_H
#define UI_EXCLUIRESERVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_excluireserva
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtQuarto;
    QLabel *label_3;
    QLineEdit *txtDia;
    QLabel *label_4;
    QLineEdit *txtMes;
    QLabel *label_5;
    QLineEdit *txtAno;
    QPushButton *btnCancelar;
    QPushButton *btnCancelaReserva;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *excluireserva)
    {
        if (excluireserva->objectName().isEmpty())
            excluireserva->setObjectName(QStringLiteral("excluireserva"));
        excluireserva->resize(485, 170);
        centralwidget = new QWidget(excluireserva);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 301, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 47, 16));
        txtQuarto = new QLineEdit(centralwidget);
        txtQuarto->setObjectName(QStringLiteral("txtQuarto"));
        txtQuarto->setGeometry(QRect(70, 60, 113, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 60, 81, 16));
        txtDia = new QLineEdit(centralwidget);
        txtDia->setObjectName(QStringLiteral("txtDia"));
        txtDia->setGeometry(QRect(290, 60, 21, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(321, 60, 16, 16));
        txtMes = new QLineEdit(centralwidget);
        txtMes->setObjectName(QStringLiteral("txtMes"));
        txtMes->setGeometry(QRect(340, 60, 21, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 60, 16, 16));
        txtAno = new QLineEdit(centralwidget);
        txtAno->setObjectName(QStringLiteral("txtAno"));
        txtAno->setGeometry(QRect(390, 60, 41, 20));
        btnCancelar = new QPushButton(centralwidget);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));
        btnCancelar->setGeometry(QRect(130, 100, 101, 23));
        btnCancelaReserva = new QPushButton(centralwidget);
        btnCancelaReserva->setObjectName(QStringLiteral("btnCancelaReserva"));
        btnCancelaReserva->setGeometry(QRect(250, 100, 101, 23));
        excluireserva->setCentralWidget(centralwidget);
        menubar = new QMenuBar(excluireserva);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 485, 21));
        excluireserva->setMenuBar(menubar);
        statusbar = new QStatusBar(excluireserva);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        excluireserva->setStatusBar(statusbar);

        retranslateUi(excluireserva);

        QMetaObject::connectSlotsByName(excluireserva);
    } // setupUi

    void retranslateUi(QMainWindow *excluireserva)
    {
        excluireserva->setWindowTitle(QApplication::translate("excluireserva", "MainWindow", nullptr));
        label->setText(QApplication::translate("excluireserva", "Digite o Quarto e Data da Entrada para Cancelar a Reserva:", nullptr));
        label_2->setText(QApplication::translate("excluireserva", "Quarto:", nullptr));
        label_3->setText(QApplication::translate("excluireserva", "Data de Entrada:", nullptr));
        label_4->setText(QApplication::translate("excluireserva", "/", nullptr));
        label_5->setText(QApplication::translate("excluireserva", "/", nullptr));
        btnCancelar->setText(QApplication::translate("excluireserva", "Voltar", nullptr));
        btnCancelaReserva->setText(QApplication::translate("excluireserva", "Cancelar Reserva", nullptr));
    } // retranslateUi

};

namespace Ui {
    class excluireserva: public Ui_excluireserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUIRESERVA_H
