#include <iostream>
#include <vehiculo.h>
#include <map>
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

Tipo vehiculo::getTipo(){
    if(marcaModelo=="autos"){
        return autos;
    }
    if(marcaModelo=="camión"){
        return camión;
    }
    if(marcaModelo=="bus"){
        return bus;
    }
    if(marcaModelo=="ambulancia"){
        return ambulancia;
    }
}
