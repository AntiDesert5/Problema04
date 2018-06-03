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
    s.append("newtons");
    ui->obtResultado->setText(s.toStdString().c_str());
}
