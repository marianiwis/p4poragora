#ifndef ARTICULOREVISTA.H
#define ARTICULOREVISTA.H

using namespace std;
#include <string>
#include "Publicacion.h"
#include "DTFecha.h"    
#include "DTRefer.h"     

#include <list>

class ArticuloRevista : public Publicacion{

    private: 
        string revista;
        string extracto;
    
    public:
        ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto);
        bool contienePalabra(string palabra) override;
        DTRefer getDT() override;
    
};

#endif