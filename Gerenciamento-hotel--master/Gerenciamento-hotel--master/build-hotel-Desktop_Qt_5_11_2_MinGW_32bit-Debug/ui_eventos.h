/********************************************************************************
** Form generated from reading UI file 'eventos.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTOS_H
#define UI_EVENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eventos
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *eventos)
    {
        if (eventos->objectName().isEmpty())
            eventos->setObjectName(QStringLiteral("eventos"));
        eventos->resize(327, 280);
        centralwidget = new QWidget(eventos);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 121, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 70, 121, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 70, 121, 61));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 140, 121, 61));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 140, 121, 61));
        eventos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(eventos);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 327, 21));
        eventos->setMenuBar(menubar);
        statusbar = new QStatusBar(eventos);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        eventos->setStatusBar(statusbar);

        retranslateUi(eventos);

        QMetaObject::connectSlotsByName(eventos);
    } // setupUi

    void retranslateUi(QMainWindow *eventos)
    {
        eventos->setWindowTitle(QApplication::translate("eventos", "MainWindow", nullptr));
        label->setText(QApplication::translate("eventos", "Eventos/Campeonatos", nullptr));
        pushButton->setText(QApplication::translate("eventos", "Futebol", nullptr));
        pushButton_2->setText(QApplication::translate("eventos", "Ping Pong", nullptr));
        pushButton_3->setText(QApplication::translate("eventos", "Tennis", nullptr));
        pushButton_4->setText(QApplication::translate("eventos", "Volei", nullptr));
    } // retranslateUi

};

namespace Ui {
    class eventos: public Ui_eventos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTOS_H
