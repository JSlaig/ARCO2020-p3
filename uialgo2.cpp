#include "uialgo2.h"
#include "ui_uialgo2.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <iostream>
#include <QDirIterator>



uiAlgo2::uiAlgo2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uiAlgo2)
{
    ui->setupUi(this);
}

uiAlgo2::~uiAlgo2()
{
    delete ui;
}

void uiAlgo2::on_butt_OpenFile_released()
{
   /* fileBrowser fileBrow;
    fileBrow.exec();*/

    /*QString file_name = QFileDialog::getOpenFileName(this,"Open a file","C://");

    QFile file(file_name);*/

    directoryFolder = QFileDialog::getExistingDirectory(this,"Open a File", "C://");

    //===============================
    QDirIterator prueba(directoryFolder);

    prueba.next();
    prueba.next();

    while(prueba.hasNext()){

        paths.push_back(prueba.next());


        //std::cout << "--> " << archivoSelect.toStdString() <<std::endl;


    }
    int tamano = static_cast<int>(paths.size());

    for(int i = 0; i < tamano; i++){

        std::cout << "--> " << paths.at(i).toStdString() <<std::endl;

    }
    std::cout << "he terminado " << std::endl;

}

void uiAlgo2::on_butt_DestinationFolder_released()
{
    destinationFolder = QFileDialog::getExistingDirectory(this,"Open a File", directoryFolder);

}


void uiAlgo2::on_butt_Convert_released()
{
    if(destinationFolder.isEmpty()){
        destinationFolder = directoryFolder;
    }
    unsigned t0, t1;
    double time[5];

    for(int i = 0; i < 5; i++){
        t0 = clock();

        //Llamada al algoritmo
        tratado.escalaVerdes(paths,destinationFolder);

        t1 = clock();

        time[i] = (double(t1-t0)/CLOCKS_PER_SEC) * 1000;
    }

    ui->time_1->setText(QString::number((time[0])) + " ms");
    ui->time_2->setText(QString::number((time[1])) + " ms");
    ui->time_3->setText(QString::number((time[2])) + " ms");
    ui->time_4->setText(QString::number((time[3])) + " ms");
    ui->time_5->setText(QString::number((time[4])) + " ms");
    int avg = (time[0] + time[1] + time[2] + time[3] + time[4]) / 5;
    ui->time_average->setText(QString::number(avg) + " ms");

}
