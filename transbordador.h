#ifndef _TR
#define _TR

#include <list>
#include <vehiculo.h>
using namespace std;


/* clase para las defensas de la base */

class transbordador{
    private:     
    public:
        transbordador(){};
        transbordador(string n, string p, int c, int f, int l);
        string nombre;
        string puertoActual;
        int capacidad;
        int filas;
        int largo;

        list<vehiculo> fila0;
        list<vehiculo> fila1;
        list<vehiculo> fila2;
        list<vehiculo> fila3;
        list<vehiculo> fila4;

        // list<vehiculo> fila[];        array de listas

        bool pushVehiculo (int fila, vehiculo v);
      /* Agrega el vehículo v a la fila fila. Considere que no puede superar el largo máximo de esa fila,
         ni superar el peso máximo del transbordador.
         Adicionalmente, solo se puede subir como máximo un camión y un bus (1 de cada 1 como
         máximo) Devuelve true si pudo subir el vehículo y false si no lo pudo subir. */
        void popVehiculo (int fila);
        
        int getEspacioLibre(int fila);
     /*  Recupera el espacio libre de la fila fila. Considere que debe sumar la longitud de todos los
         vehículos de la fila, pero dejando 15 cms de separación entre vehículos */
        int getLargoFila(int fila);
        int getPesoLibre();
     /* Devuelve cuanto peso queda disponible para cargar nuevos vehículos,
        considerando la capacidad máxima y restando los vehículos que ya están a bordo, si los hubiera. */
        bool getTipo(enum tipo);
     /* devuelve true si existe algún vehículo de ese tipo y false si no hay ninguno de esos. */
        

};

#endif