#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Publicacion.h"
#include "DTRefer.h"
#include "DTFecha.h"
#include <string>

using namespace std;

class PaginaWeb : public Publicacion{
    private:
        string url;
        string contenidoExtraido;
    public:
        //constructor
        PaginaWeb(string DOI, string titulo, DTFecha fecha, string url, string contenidoExtraido);
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
#endif /*PAGINAWEB_H*/