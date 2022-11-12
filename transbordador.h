#ifndef _TR
#define _TR

#include <list>
#include <vehiculo.h>
using namespace std;


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


      // las filas definidas de forma individual
      /* list<vehiculo> fila0;
      list<vehiculo> fila1;
      list<vehiculo> fila2;
      list<vehiculo> fila3;
      list<vehiculo> fila4; */

      list<vehiculo> lista_fila[5];        //array de listas

      bool pushVehiculo (int fila, vehiculo v);
      void popVehiculo (int fila); 
      
      int getEspacioLibre(int fila);
      int getLargoFila(int fila);
      int getPesoLibre();
      bool getTipo(Tipo tipo);
        

};

#endif