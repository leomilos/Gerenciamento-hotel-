/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *centralwidget;
    QPushButton *btnReservar;
    QPushButton *btnReservaDiversos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *txtNome;
    QLabel *txtSenha;
    QLabel *txtIdade;
    QLabel *txtSexo;
    QLabel *txtCpf;
    QListWidget *listWidget;
    QPushButton *btnSair;
    QListWidget *listWidget_2;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(664, 515);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btnReservar = new QPushButton(centralwidget);
        btnReservar->setObjectName(QStringLiteral("btnReservar"));
        btnReservar->setGeometry(QRect(20, 370, 221, 41));
        btnReservaDiversos = new QPushButton(centralwidget);
        btnReservaDiversos->setObjectName(QStringLiteral("btnReservaDiversos"));
        btnReservaDiversos->setGeometry(QRect(20, 420, 221, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 121, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 47, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 100, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 120, 47, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 140, 47, 13));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 160, 47, 13));
        txtNome = new QLabel(centralwidget);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(110, 80, 131, 16));
        txtSenha = new QLabel(centralwidget);
        txtSenha->setObjectName(QStringLiteral("txtSenha"));
        txtSenha->setGeometry(QRect(110, 100, 131, 16));
        txtIdade = new QLabel(centralwidget);
        txtIdade->setObjectName(QStringLiteral("txtIdade"));
        txtIdade->setGeometry(QRect(110, 120, 141, 16));
        txtSexo = new QLabel(centralwidget);
        txtSexo->setObjectName(QStringLiteral("txtSexo"));
        txtSexo->setGeometry(QRect(110, 140, 141, 16));
        txtCpf = new QLabel(centralwidget);
        txtCpf->setObjectName(QStringLiteral("txtCpf"));
        txtCpf->setGeometry(QRect(110, 160, 141, 16));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(260, 30, 191, 431));
        btnSair = new QPushButton(centralwidget);
        btnSair->setObjectName(QStringLiteral("btnSair"));
        btnSair->setGeometry(QRect(10, 10, 75, 23));
        listWidget_2 = new QListWidget(centralwidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(460, 30, 191, 431));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 10, 111, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(460, 10, 101, 16));
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 664, 21));
        menu->setMenuBar(menubar);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        menu->setStatusBar(statusbar);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "MainWindow", nullptr));
        btnReservar->setText(QApplication::translate("menu", "Reservar Quarto", nullptr));
        btnReservaDiversos->setText(QApplication::translate("menu", "Reservar Diversos", nullptr));
        label->setText(QApplication::translate("menu", "Informacoes do Usuario ", nullptr));
        label_2->setText(QApplication::translate("menu", "Nome:", nullptr));
        label_3->setText(QApplication::translate("menu", "Senha:", nullptr));
        label_4->setText(QApplication::translate("menu", "Idade:", nullptr));
        label_5->setText(QApplication::translate("menu", "Sexo:", nullptr));
        label_6->setText(QApplication::translate("menu", "Cpf:", nullptr));
        txtNome->setText(QApplication::translate("menu", "TextLabel", nullptr));
        txtSenha->setText(QApplication::translate("menu", "TextLabel", nullptr));
        txtIdade->setText(QApplication::translate("menu", "TextLabel", nullptr));
        txtSexo->setText(QApplication::translate("menu", "TextLabel", nullptr));
        txtCpf->setText(QApplication::translate("menu", "TextLabel", nullptr));
        btnSair->setText(QApplication::translate("menu", "Logout ", nullptr));
        label_7->setText(QApplication::translate("menu", "Quartos Reservados:", nullptr));
        label_8->setText(QApplication::translate("menu", "Reservas Diversas:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
