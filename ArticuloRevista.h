#ifndef ARTICULOREVISTA.H
#define ARTICULOREVISTA.H

using namespace std;
#include <string>
#include <list>

class ArticuloRevista : public Publicacion{

    private: 
        string revista;
        string extracto;
    
    public:
        ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto);
        bool contienePalabra(string palabra);
    


        


};

#endif