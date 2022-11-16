#include <iostream>
#include "Vehiculo.h"
#include <map>
using namespace std;

// Constuctir vacio
Vehiculo::Vehiculo(){
}

// COnstructor datos
Vehiculo::Vehiculo(string m, int l, int p, Tipo t){
    marcaModelo= m;
    largo= l;
    peso= p;
    tipo = t;
}

//Destructor
Vehiculo::~Vehiculo(){
}

//Metodos
int Vehiculo::getLargo(){
    return largo;
}
int Vehiculo::getPeso(){
    return peso;
}

Tipo Vehiculo::getTipo(){
    return tipo;
}
