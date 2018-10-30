#ifndef RESERVAQUARTO_H
#define RESERVAQUARTO_H

#include <QMainWindow>
#include "reservas.h"

namespace Ui {
class reservaQuarto;
}

class reservaQuarto : public QMainWindow
{
    Q_OBJECT

public:
    explicit reservaQuarto(QWidget *parent = nullptr);
    ~reservaQuarto();

private slots:
    void on_btnProximo_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::reservaQuarto *ui;
signals:
    void mandaQuarto(QString,QString,QString,QString,QString,QString,QString);
};

#endif // RESERVAQUARTO_H
