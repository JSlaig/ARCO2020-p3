#include "ordenacion.h"
#include<vector>
#include <iostream>
#include <fstream>
#include <stdlib.h>

Ordenacion::Ordenacion()
{

}

void Ordenacion::rellenarLista(){

       std::ifstream archivo;
       int numero;
       archivo.open("Numeros.txt",std::ios::out);// FALLO EN ESTA LINEA
       if (archivo.fail()){
           std::cout << "NO SE PUDO ABRIR EL ARCHIVO";
           exit(1);

       }
       while (archivo >> numero){
              Ordenacion::listaNumeros.push_back(numero);
              //std::cout << numero << std::endl;
          }



      archivo.close();

       }



void Ordenacion::ordenarLista(){
      int temporal;
      int tam = Ordenacion::listaNumeros.size();
      for (int i = 0; i < tam;i++){
          for (int j = 0; j < tam-1;j++){
              if (Ordenacion::listaNumeros[j] < Ordenacion::listaNumeros[j+1]){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                          temporal = Ordenacion::listaNumeros[j];
                          Ordenacion::listaNumeros[j] = Ordenacion::listaNumeros[j+1];
                          Ordenacion::listaNumeros[j+1] = temporal;
                          }
                      }
                  }

          }

void Ordenacion::imprimirLista(){
    for (int i = 0; i < Ordenacion::listaNumeros.size();i++){
        std::cout << Ordenacion::listaNumeros[i] << std::endl;
    }
}
