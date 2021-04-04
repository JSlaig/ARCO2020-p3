#ifndef ORDENACION_H
#define ORDENACION_H
#include<vector>
#include<iostream>
#include<fstream>

class Ordenacion
{
private:
    std::vector<int>listaNumeros;
public:
    Ordenacion();
    void rellenarLista(std::string ruta);
    void ordenarLista();
    void imprimirLista();
    void escribirFichero(std::string ruta);
};

#endif // ORDENACION_H
