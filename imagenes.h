#ifndef IMAGENES_H
#define IMAGENES_H
#include "vector"
#include <QDialog>
#include "iostream"

class imagenes
{
public:
    imagenes();
    void escalaVerdes(std::vector<QString> imagenes,QString destinationFolderPath);
};

#endif // IMAGENES_H
