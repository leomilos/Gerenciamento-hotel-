#ifndef QUARTOS_H
#define QUARTOS_H

#include <QMainWindow>

namespace Ui {
class quartos;
}

class quartos : public QMainWindow
{
    Q_OBJECT

public:
    explicit quartos(QWidget *parent = 0);
    ~quartos();

private:
    Ui::quartos *ui;
};

#endif // QUARTOS_H
