#ifndef EVENTOS_H
#define EVENTOS_H

#include <QMainWindow>

namespace Ui {
class eventos;
}

class eventos : public QMainWindow
{
    Q_OBJECT

public:
    explicit eventos(QWidget *parent = 0);
    ~eventos();

private:
    Ui::eventos *ui;
};

#endif // EVENTOS_H
