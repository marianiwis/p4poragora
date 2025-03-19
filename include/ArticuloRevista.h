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
       // heredadas 

       //getters
        string getDOI();
        string getTitulo();
        DTFecha getFecha();
        //setters
        void setDOI(string DOI);
        void setTitulo(string titulo);
        void setFecha(DTFecha fecha);

        DTRefer getDT();
        //op polimorfica
        bool contienePalabra(string palabra);
};

#endif /*ARTICULOREVISTA_H*/