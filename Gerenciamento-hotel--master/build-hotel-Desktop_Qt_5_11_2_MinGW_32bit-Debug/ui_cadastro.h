/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

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

class Ui_cadastro
{
public:
    QWidget *centralwidget;
    QLineEdit *Nome;
    QLineEdit *Sobrenome;
    QLineEdit *Idade;
    QLineEdit *Sexo;
    QLineEdit *Cpf;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cadastro)
    {
        if (cadastro->objectName().isEmpty())
            cadastro->setObjectName(QStringLiteral("cadastro"));
        cadastro->resize(234, 298);
        centralwidget = new QWidget(cadastro);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Nome = new QLineEdit(centralwidget);
        Nome->setObjectName(QStringLiteral("Nome"));
        Nome->setGeometry(QRect(60, 50, 113, 20));
        Sobrenome = new QLineEdit(centralwidget);
        Sobrenome->setObjectName(QStringLiteral("Sobrenome"));
        Sobrenome->setGeometry(QRect(90, 80, 113, 20));
        Idade = new QLineEdit(centralwidget);
        Idade->setObjectName(QStringLiteral("Idade"));
        Idade->setGeometry(QRect(60, 110, 113, 20));
        Sexo = new QLineEdit(centralwidget);
        Sexo->setObjectName(QStringLiteral("Sexo"));
        Sexo->setGeometry(QRect(60, 140, 113, 20));
        Cpf = new QLineEdit(centralwidget);
        Cpf->setObjectName(QStringLiteral("Cpf"));
        Cpf->setGeometry(QRect(60, 170, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 111, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 47, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 61, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 47, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 47, 13));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 170, 47, 13));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 220, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 220, 75, 23));
        cadastro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cadastro);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 234, 26));
        cadastro->setMenuBar(menubar);
        statusbar = new QStatusBar(cadastro);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        cadastro->setStatusBar(statusbar);

        retranslateUi(cadastro);

        QMetaObject::connectSlotsByName(cadastro);
    } // setupUi

    void retranslateUi(QMainWindow *cadastro)
    {
        cadastro->setWindowTitle(QApplication::translate("cadastro", "MainWindow", nullptr));
        label->setText(QApplication::translate("cadastro", "Cadastro", nullptr));
        label_2->setText(QApplication::translate("cadastro", "Nome:", nullptr));
        label_3->setText(QApplication::translate("cadastro", "Sobrenome:", nullptr));
        label_4->setText(QApplication::translate("cadastro", "Idade:", nullptr));
        label_5->setText(QApplication::translate("cadastro", "Sexo:", nullptr));
        label_6->setText(QApplication::translate("cadastro", "Cpf:", nullptr));
        pushButton->setText(QApplication::translate("cadastro", "Cadastrar", nullptr));
        pushButton_2->setText(QApplication::translate("cadastro", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro: public Ui_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
