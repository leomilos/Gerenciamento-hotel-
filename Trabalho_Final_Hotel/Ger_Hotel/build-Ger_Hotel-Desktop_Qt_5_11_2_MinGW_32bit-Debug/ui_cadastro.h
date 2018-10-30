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

class Ui_Cadastro
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtNome;
    QLineEdit *txtSenha;
    QLineEdit *txtIdade;
    QLineEdit *txtSexo;
    QLineEdit *txtCpf;
    QPushButton *btnCadastrar;
    QPushButton *btnCancelar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName(QStringLiteral("Cadastro"));
        Cadastro->resize(224, 299);
        centralwidget = new QWidget(Cadastro);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 47, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 31, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 41, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 120, 31, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 150, 31, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 180, 21, 16));
        txtNome = new QLineEdit(centralwidget);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(70, 60, 111, 20));
        txtSenha = new QLineEdit(centralwidget);
        txtSenha->setObjectName(QStringLiteral("txtSenha"));
        txtSenha->setGeometry(QRect(70, 90, 113, 20));
        txtIdade = new QLineEdit(centralwidget);
        txtIdade->setObjectName(QStringLiteral("txtIdade"));
        txtIdade->setGeometry(QRect(70, 120, 113, 20));
        txtSexo = new QLineEdit(centralwidget);
        txtSexo->setObjectName(QStringLiteral("txtSexo"));
        txtSexo->setGeometry(QRect(70, 150, 113, 20));
        txtCpf = new QLineEdit(centralwidget);
        txtCpf->setObjectName(QStringLiteral("txtCpf"));
        txtCpf->setGeometry(QRect(70, 180, 111, 20));
        btnCadastrar = new QPushButton(centralwidget);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(30, 220, 75, 23));
        btnCancelar = new QPushButton(centralwidget);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));
        btnCancelar->setGeometry(QRect(130, 220, 75, 23));
        Cadastro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cadastro);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 224, 21));
        Cadastro->setMenuBar(menubar);
        statusbar = new QStatusBar(Cadastro);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Cadastro->setStatusBar(statusbar);

        retranslateUi(Cadastro);

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QMainWindow *Cadastro)
    {
        Cadastro->setWindowTitle(QApplication::translate("Cadastro", "MainWindow", nullptr));
        label->setText(QApplication::translate("Cadastro", "Cadastro", nullptr));
        label_2->setText(QApplication::translate("Cadastro", "Nome:", nullptr));
        label_3->setText(QApplication::translate("Cadastro", "Senha:", nullptr));
        label_4->setText(QApplication::translate("Cadastro", "Idade:", nullptr));
        label_5->setText(QApplication::translate("Cadastro", "Sexo:", nullptr));
        label_6->setText(QApplication::translate("Cadastro", "CPF:", nullptr));
        btnCadastrar->setText(QApplication::translate("Cadastro", "Cadastrar", nullptr));
        btnCancelar->setText(QApplication::translate("Cadastro", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
