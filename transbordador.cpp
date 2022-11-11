#include <iostream>
#include <list>
#include <vehiculo.h>
#include <transbordador.h>
using namespace std;

transbordador::transbordador(){

}
transbordador::transbordador(string n, string p, int c, int f, int l){
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


/*  

        Tengo que ver como operar sobre una de las listas a partir de su numero

 */


bool transbordador::pushVehiculo (int fila, vehiculo v){

}
      /* Agrega el vehículo v a la fila fila. Considere que no puede superar el largo máximo de esa fila,
         ni superar el peso máximo del transbordador.
         Adicionalmente, solo se puede subir como máximo un camión y un bus (1 de cada 1 como
         máximo) Devuelve true si pudo subir el vehículo y false si no lo pudo subir. */


void popVehiculo (int fila){
    return X.pop_front();
}
    /* Elimina el primer vehículo de la fila fila */

int getEspacioLibre(int fila){

}
     /*  Recupera el espacio libre de la fila fila. Considere que debe sumar la longitud de todos los
         vehículos de la fila, pero dejando 15 cms de separación entre vehículos */

int getLargoFila(int fila){
    return X.size();
}
    /* Recupera cuantos vehículos hay en la fila fila. */

int getPesoLibre(){

}
     /* Devuelve cuanto peso queda disponible para cargar nuevos vehículos,
        considerando la capacidad máxima y restando los vehículos que ya están a bordo, si los hubiera. */
bool getTipo(enum tipo){

}
     /* devuelve true si existe algún vehículo de ese tipo y false si no hay ninguno de esos. */

