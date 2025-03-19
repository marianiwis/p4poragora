#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Publicacion.h"
#include "DTRefer.h"
#include "DTFecha.h"
#include <string>

using namespace std;

class ArticuloRevista : public Publicacion{
    private:
        string revista;
        string extracto;
    public:
        //contruc
        ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto);
        //op polimorfica
        bool contienePalabra(string palabra);
};

#endif /*ARTICULOREVISTA_H*/