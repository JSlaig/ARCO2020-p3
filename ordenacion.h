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
    void rellenarLista();
    void ordenarLista();
    void imprimirLista();
};

#endif // ORDENACION_H
