/********************************************************************************
** Form generated from reading UI file 'logado.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGADO_H
#define UI_LOGADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logado
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuServicos;
    QMenu *menuEventos;
    QMenu *menuReservas;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logado)
    {
        if (logado->objectName().isEmpty())
            logado->setObjectName(QStringLiteral("logado"));
        logado->resize(592, 428);
        logado->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget = new QWidget(logado);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 260, 181, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 300, 181, 31));
        pushButton_2->setCursor(QCursor(Qt::WaitCursor));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 340, 181, 31));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(240, 20, 321, 351));
        logado->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logado);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 592, 21));
        menuServicos = new QMenu(menubar);
        menuServicos->setObjectName(QStringLiteral("menuServicos"));
        menuEventos = new QMenu(menubar);
        menuEventos->setObjectName(QStringLiteral("menuEventos"));
        menuReservas = new QMenu(menubar);
        menuReservas->setObjectName(QStringLiteral("menuReservas"));
        logado->setMenuBar(menubar);
        statusbar = new QStatusBar(logado);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        logado->setStatusBar(statusbar);

        menubar->addAction(menuServicos->menuAction());
        menubar->addAction(menuEventos->menuAction());
        menubar->addAction(menuReservas->menuAction());

        retranslateUi(logado);

        QMetaObject::connectSlotsByName(logado);
    } // setupUi

    void retranslateUi(QMainWindow *logado)
    {
        logado->setWindowTitle(QApplication::translate("logado", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("logado", "Alterar Reserva", nullptr));
        pushButton_2->setText(QApplication::translate("logado", "Adicionar Reserva", nullptr));
        pushButton_3->setText(QApplication::translate("logado", "Excluir Reserva", nullptr));
        menuServicos->setTitle(QApplication::translate("logado", "Servicos", nullptr));
        menuEventos->setTitle(QApplication::translate("logado", "Eventos", nullptr));
        menuReservas->setTitle(QApplication::translate("logado", "Reservas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logado: public Ui_logado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGADO_H
