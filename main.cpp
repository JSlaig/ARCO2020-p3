#include "mainwindow.h"
#include "ordenacion.h"
#include <QApplication>

int main(int argc, char *argv[]){
    Ordenacion ordenacion;
    ordenacion.rellenarLista();
    ordenacion.ordenarLista();
    ordenacion.imprimirLista();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();


    //return 0;
}
