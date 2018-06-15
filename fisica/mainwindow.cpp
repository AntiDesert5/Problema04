#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <stdlib.h>
#include <figura.h>
#include <op.h>
#include <anguloobt.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->info1->setText("");
    ui->info2->setText("");
    ui->info3->setText("");
    ui->info4->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_Calcula_clicked()
{
        double masa = ui->Masa->text().toDouble();
        double angulo = ui->Angulo->text().toDouble()*M_PI/180;
        double coeficiente = ui->Coeficiente->text().toDouble();
        Figura figura;
        figura.setMasa(masa);
        anguloObt ang;
        ang.setAngulo(angulo);
        Op insertar(figura,ang,coeficiente);
        QString s= QString::number(insertar.Resultado());
        s.append(" newtons");
        ui->obtResultado->setText(s.toStdString().c_str());
        //ui->inf1->setText("("+QString::number(ui->pe->value())+" kg)(9.81 m/s^2)-("+QString::number(ui->pe->value())+" kg)("+QString::number(ui->ac->value())+" m/s^2)");

        ui->info1->setText("N ="+QString::number(ui->Masa->value())+"*9.81*cos("+QString::number(ui->Angulo->value())+")+F");
        float r=masa*9.81;
        ui->info2->setText("Fs = "+QString::number(r)+"*Sen("+QString::number(ui->Angulo->value())+")");
        ui->info3->setText("Fs=Ms*N");
        ui->info4->setText(QString::number(r)+"*Sen("+QString::number(ui->Angulo->value())+") = "+QString::number(coeficiente)+"*N");
        ui->info5->setText("N = ("+QString::number(r)+"*Sen("+QString::number(ui->Angulo->value())+"))/"+QString::number(coeficiente));
        ui->info6->setText("-F-"+QString::number(r)+"*Cos("+QString::number(ui->Angulo->value())+")"+"+N");
        ui->info7->setText( "F = (("+QString::number(r)+"*Sen("+QString::number(ui->Angulo->value())+"))/"+QString::number(coeficiente)+")-"+QString::number(r)+"Cos("+QString::number(ui->Angulo->value())+")");
        ui->info8->setText("F ="+s);
}
