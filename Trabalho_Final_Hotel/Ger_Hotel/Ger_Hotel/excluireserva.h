#ifndef EXCLUIRESERVA_H
#define EXCLUIRESERVA_H

#include <QMainWindow>

namespace Ui {
class excluireserva;
}

class excluireserva : public QMainWindow
{
    Q_OBJECT

public:
    explicit excluireserva(QWidget *parent = nullptr);
    ~excluireserva();

private slots:
    void on_btnCancelaReserva_clicked();


signals:
    void mandaExcluir(QString,QString,QString,QString);

private:
    Ui::excluireserva *ui;
};

#endif // EXCLUIRESERVA_H
