#include "reservaquarto.h"
#include "ui_reservaquarto.h"

reservaQuarto::reservaQuarto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reservaQuarto)
{
    ui->setupUi(this);
}

reservaQuarto::~reservaQuarto()
{
    delete ui;
}

void reservaQuarto::on_btnProximo_clicked()
{
    QString eDia,eMes,eAno,sDia,sMes,sAno;
    eDia = ui->btnEdia->text();
    eMes = ui->btnEmes->text();
    eAno = ui->btnEano->text();
    sDia = ui->btnSdia->text();
    sMes = ui->btnSmes->text();
    sAno = ui->btnSano->text();

    if(ui->rb1->isChecked()){
        emit mandaQuarto("001",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb2->isChecked()){
        emit mandaQuarto("002",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb3->isChecked()){
        emit mandaQuarto("003",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb4->isChecked()){
        emit mandaQuarto("004",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb5->isChecked()){
        emit mandaQuarto("005",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb6->isChecked()){
        emit mandaQuarto("006",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb7->isChecked()){
        emit mandaQuarto("007",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb8->isChecked()){
        emit mandaQuarto("008",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb9->isChecked()){
        emit mandaQuarto("009",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb10->isChecked()){
        emit mandaQuarto("010",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb11->isChecked()){
        emit mandaQuarto("011",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb12->isChecked()){
        emit mandaQuarto("012",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb13->isChecked()){
        emit mandaQuarto("013",eDia,eMes,eAno,sDia,sMes,sAno);
    }else if(ui->rb14->isChecked()){
        emit mandaQuarto("014",eDia,eMes,eAno,sDia,sMes,sAno);
    }
    close();

}

void reservaQuarto::on_btnCancelar_clicked()
{
    close();
}
