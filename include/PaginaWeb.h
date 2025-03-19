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
       //op polimorfica
       bool contienePalabra(string palabra);
};
#endif /*PAGINAWEB_H*/