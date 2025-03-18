#ifndef PAGINAWEB_H
#define PAGINAWEB_H

using namespace std;
#include <string>
#include "Publicacion.h"

class PaginaWeb : public Publicacion{

    private: 
        string url;
        string contenidoExtraido;
    
    public:
        PaginaWeb(string DOI, string titulo, DTFecha fecha, string url, string contenidoExtraido);
        bool contienePalabra(string palabra);



};

#endif