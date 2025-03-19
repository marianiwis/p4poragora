#ifndef LIBRO.H
#define LIBRO.H

using namespace std;
#include <string>
#include "Publicacion.h"
#include "DTFecha.h"    
#include "DTRefer.h"   
#include <set>

class Libro : public Publicacion{

    private: 
        string editorial;
        set<string> palabrasDestacadas;
        
    public:
        Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<string> palabrasDestacadas);
        bool contienePalabra(string palabra) override;
        DTRefer getDT() override;

};

#endif