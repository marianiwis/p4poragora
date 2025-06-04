#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Publicacion.h"
#include "DTFecha.h"
#include <string>

class ArticuloRevista : public Publicacion{
    private:
        std::string revista, extracto;
    public:
        //contruc
        ArticuloRevista(const std::string& DOI, const std::string& titulo, const DTFecha& fecha, const std::string& revista, const std::string& extracto);
        //op polimorfica
        bool contienePalabra(const std::string& palabra);
};

#endif