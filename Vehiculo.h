#ifndef _VE
#define _VE
#include <map>
using namespace std;

enum Tipo {autos, camion, bus, ambulancia};

class Vehiculo{
	private:
		int largo;
		int peso;
		string marcaModelo;
		Tipo tipo;
	public:
		Vehiculo();
		Vehiculo(string m, int l, int p, Tipo t);
		~Vehiculo();		
		int getLargo();
		int getPeso();
		Tipo getTipo();
};

#endif
