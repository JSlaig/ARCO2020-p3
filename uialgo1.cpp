#include "uialgo1.h"
#include "ui_uialgo1.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <iostream>
#include <QDirIterator>
#include "ordenacion.h"

uiAlgo1::uiAlgo1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uiAlgo1)
{
    ui->setupUi(this);
}

uiAlgo1::~uiAlgo1()
{
    delete ui;
}




void uiAlgo1::on_Algo1butt_OpenFile_released()
{

    /* fileBrowser fileBrow;
     fileBrow.exec();*/

     /*QString file_name = QFileDialog::getOpenFileName(this,"Open a file","C://");

     QFile file(file_name);*/

     //directoryFolder = QFileDialog::getExistingDirectory(this,"Open a File", "C://");
       directoryFile = QFileDialog::getOpenFileName();
       std::cout << directoryFile.toStdString() << std::endl;
       ordenacion.rellenarLista(directoryFile.toStdString());
       ordenacion.imprimirLista();

     //===============================

     std::cout << "he terminado en algoritmo1 " << std::endl;

 }


void uiAlgo1::on_Algo1butt_DestinationFolder_released()
{
    destinationFolder = QFileDialog::getSaveFileName();

    if(destinationFolder.isEmpty()){
        destinationFolder = directoryFile;


    } else {
        std::cout << "carpeta destino" << std::endl;
         ordenacion.ordenarLista();
        ordenacion.imprimirLista();
        std::string archivoDestino = destinationFolder.toStdString();
        ordenacion.escribirFichero(archivoDestino);
        std::cout << destinationFolder.toStdString() << std::endl;

    }
}



int uiAlgo1::tiempoEjecucion(){
    int tiempo = 0;
    return tiempo;
}






void uiAlgo1::on_reset_released()
{
    ui->time1->setText("");
    ui->time2->setText("");
    ui->time3->setText("");
    ui->time4->setText("");
    ui->time5->setText("");
    ui->averageTime->setText("");
}



void uiAlgo1::on_EXECUTION_released()
{
    unsigned t0, t1;
    double time[5];

    for(int i = 0; i < 5; i++){
        t0 = clock();

        ordenacion.ordenarLista();

        t1 = clock();

        time[i] = (double(t1-t0)/CLOCKS_PER_SEC) * 1000;
    }

    ui->time1->setText(QString::number(floor(time[0])) + " ms");
    ui->time2->setText(QString::number(floor(time[1])) + " ms");
    ui->time3->setText(QString::number(floor(time[2])) + " ms");
    ui->time4->setText(QString::number(floor(time[3])) + " ms");
    ui->time5->setText(QString::number(floor(time[4])) + " ms");
    int avg = floor(time[0] + time[1] + time[2] + time[3] + time[4]) / 5;
    ui->averageTime->setText(QString::number(avg) + " ms");
}
