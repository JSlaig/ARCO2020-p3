#include "imagenes.h"
#include <QFileDialog>
#include <QImage>
#include <QPixmap>


imagenes::imagenes()
{

}
void imagenes::escalaVerdes(std::vector<QString> imagenes){
    QImage imagen(NULL);
    QRgb color(NULL);
    int i=0;
    int j=0;
    int k=0;
    imagen.load(imagenes.at(0));
    while(i < imagen.width()){
                while(j < imagen.height()){

                    color = imagen.pixel(i, j);
                    int gray = (qRed(color) + qGreen(color) + qBlue(color))/3;
                    imagen.setPixel(i, j, qRgb(0.20*gray, 0.60*gray, 0.20*gray));
                    j++;
                }
                j=0;
                i++;
    }
     std::cout << "PRUEBA";
    imagen.save(imagenes.at(0), nullptr, -1);
}
