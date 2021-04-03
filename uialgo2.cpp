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

    if(destinationFolder.isEmpty()){
        destinationFolder = directoryFolder;
    }
}
