#include <iostream>
#include <vehiculo.h>

using namespace std;

vehiculo::vehiculo(){

}
vehiculo::vehiculo(string m, int l, int p){
    marcaModelo= m;
    largo= l;
    peso= p;
}


int vehiculo::getLargo(){
    return largo;
}
int vehiculo::getPeso(){
    return peso;
}

// tengo que ver que hacer con lo de los tipos de datos
tipo vehiculo::getTipo(){
    return marcaModelo;
}