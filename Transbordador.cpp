#include <iostream>
#include <list>
#include "Vehiculo.h"
#include "Transbordador.h"
using namespace std;

// Consturctor vacio
Transbordador::Transbordador(){

//Consturctor valores
}
Transbordador::Transbordador(string n, string p, int c, int f, int l){
    nombre= n;
    puertoActual= p;
    if(c<6){
        if(c>0){
            capacidad= c;
        }
        else{
            cout << "capacidad fuera de los limites" << endl;
        }
    }
    else{
        cout << "capacidad fuera de los limites" << endl;
    }
    filas= f;
    largo= l;

}

//Destructor
Transbordador::~Transbordador(){
}

//Metodos
bool Transbordador::pushVehiculo (int fila, Vehiculo v){
    if(getEspacioLibre(fila)>=(v.getLargo()+15)){
        if(getPesoLibre()>=v.getPeso()){
            if(v.getTipo()==camion){
                if(getTipo(camion)){
                    return false;
                }
                else{
                    lista_fila[fila].push_back(v);
                    return true;
                }
            }
            if(v.getTipo()==bus){
                if(getTipo(bus)){
                    return false;
                }
                else{
                    lista_fila[fila].push_back(v);
                    return true;
                }
            }
            lista_fila[fila].push_back(v);
            return true;
        }
    }
    return false;
}
      /* Agrega el vehículo v a la fila fila. Considere que no puede superar el largo máximo de esa fila,
         ni superar el peso máximo del transbordador.
         Adicionalmente, solo se puede subir como máximo un camión y un bus (1 de cada 1 como
         máximo) Devuelve true si pudo subir el vehículo y false si no lo pudo subir. */


void Transbordador::popVehiculo (int fila){
    return lista_fila[fila].pop_front();
}
    /* Elimina el primer vehículo de la fila fila */

int Transbordador::getEspacioLibre(int fila){
    int totallenght=0;
    for (list<Vehiculo>::iterator it = lista_fila[fila].begin(); it != lista_fila[fila].end(); ++it){
        totallenght+= it->getLargo()+15;
    }
    totallenght-=15;
    return (largo-totallenght);
}
     /*  Recupera el espacio libre de la fila fila. Considere que debe sumar la longitud de todos los
         vehículos de la fila, pero dejando 15 cms de separación entre vehículos */

int Transbordador::getLargoFila(int fila){
    return lista_fila[fila].size();
}
    /* Recupera cuantos vehículos hay en la fila fila. */

int Transbordador::getPesoLibre(){
    int totalweight=0;
    for (int i=0; i<filas;i++){
        for (list<Vehiculo>::iterator it = lista_fila[i].begin(); it != lista_fila[i].end(); ++it){
            totalweight+= it->getPeso();
        }
    }
    return (capacidad-totalweight);
}
     /* Devuelve cuanto peso queda disponible para cargar nuevos vehículos,
        considerando la capacidad máxima y restando los vehículos que ya están a bordo, si los hubiera. */

bool Transbordador::getTipo(Tipo marca){
    for (int i=0; i<filas;i++){
        for (list<Vehiculo>::iterator it = lista_fila[i].begin(); it != lista_fila[i].end(); ++it){
            if(it->getTipo()==marca){
                return true;
            }
        }
    }
    return false;
}
     /* devuelve true si existe algún vehículo de ese tipo y false si no hay ninguno de esos. */

