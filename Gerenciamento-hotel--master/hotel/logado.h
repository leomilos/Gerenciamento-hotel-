#ifndef LOGADO_H
#define LOGADO_H

#include <QMainWindow>

namespace Ui {
class logado;
}

class logado : public QMainWindow
{
    Q_OBJECT

public:
    explicit logado(QWidget *parent = 0);
    ~logado();

private:
    Ui::logado *ui;
};

#endif // LOGADO_H
