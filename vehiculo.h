#ifndef _VE
#define _VE

using namespace std;


/* clase para las defensas de la base */

class vehiculo{
    private:     
    public:
        vehiculo(){};
        vehiculo(string m, int l, int p);
        string marcaModelo;
        int largo;
        int peso;
        enum tipo {autos, camión, bus, ambulancia};
        
        int getLargo();
        int getPeso();
        tipo getTipo();

};

#endif