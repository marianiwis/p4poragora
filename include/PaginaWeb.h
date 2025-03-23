#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Publicacion.h"
#include "DTRefer.h"
#include "DTFecha.h"
#include <string>


class PaginaWeb : public Publicacion{
    private:
        std::string url;
        std::string contenidoExtraido;
    public:
        //constructor
        PaginaWeb(const std::string& DOI, const std::string& titulo, const DTFecha& fecha, const std::string& url, const std::string& contenidoExtraido);
       //op polimorfica
       bool contienePalabra(const std::string& palabra) const;
};
#endif /*PAGINAWEB_H*/