#ifndef _VE
#define _VE
#include <map>
using namespace std;

enum Tipo {autos, camión, bus, ambulancia};

class vehiculo{
    private:     
    public:
        vehiculo(){};
        vehiculo(string m, int l, int p);
        string marcaModelo;
        int largo;
        int peso;
        

        int getLargo();
        int getPeso();
        Tipo getTipo();

};

#endif