#ifndef _TR
#define _TR

#include <list>
#include "Vehiculo.h"
using namespace std;


class Transbordador{
	private:     
		string nombre;
		string puertoActual;
		int capacidad;
		int filas;
		int largo;
		list<Vehiculo> lista_fila[5];        //array de listas
	public:
		Transbordador();
		Transbordador(string n, string p, int c, int f, int l);
		~Transbordador();
		bool pushVehiculo (int fila, Vehiculo v);
		void popVehiculo (int fila); 
		int getEspacioLibre(int fila);
		int getLargoFila(int fila);
		int getPesoLibre();
		bool getTipo(Tipo tipo);   

};

#endif
