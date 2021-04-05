#include "imagenes.h"
#include <QFileDialog>
#include <QImage>
#include <QPixmap>


imagenes::imagenes()
{

}
void imagenes::escalaVerdes(std::vector<QString> imagenes,QString destinationFolderPath){

    QImage imagen(NULL);
    QRgb color(NULL);
    int i=0;
    int j=0;
    int k=0;
    int iterator = 1;


    for(k = 0; k < static_cast<int>(imagenes.size());k++){

    i=0;
    j=0;

    QString destinationFolderPathCopy = destinationFolderPath;

    imagen.load(imagenes.at(k));

    while(i < imagen.width()){
                while(j < imagen.height()){

                    color = imagen.pixel(i, j);
                    int gray = (qRed(color) + qGreen(color) + qBlue(color))/3;
                    imagen.setPixel(i, j, qRgb(0.10*gray, 0.75*gray, 0.15*gray));
                    j++;
                }
                j=0;
                i++;
    }
     std::cout << "PRUEBA";

//    imagen.save(imagenes.at(0), nullptr, -1);

     //====================Nombre archivo=================
     QString name = "/Imagen_";

     QString stringIterator;


     stringIterator = QString::number(iterator);

     name.append(stringIterator);
     //--> "/Imagen_1
     name.append(".jpg");
     //--> "/Imagen_1.png

     destinationFolderPathCopy.append(name);

     std::cout << "DESTINO -> " << destinationFolderPathCopy.toStdString() << std::endl;


    if(!imagen.save(destinationFolderPathCopy)){

        std::cout << "Error al guardar la imagen" << std::endl;

    }


    std::cout << "Finalizado" << std::endl;

    //================
    iterator++;

    //imagen.load(NULL);

    }
}
