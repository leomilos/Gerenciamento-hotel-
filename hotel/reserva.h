#ifndef RESERVA_H
#define RESERVA_H

#include <QMainWindow>

namespace Ui {
class reserva;
}

class reserva : public QMainWindow
{
    Q_OBJECT

public:
    explicit reserva(QWidget *parent = 0);
    ~reserva();

private:
    Ui::reserva *ui;
};

#endif // RESERVA_H
