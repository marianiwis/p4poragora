#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Publicacion.h"
#include <string>

class ArticuloRevista : public Publicacion {
private:
    std::string revista, extracto;
public:
    ArticuloRevista(const std::string& doi, const std::string& titulo, const DTFecha& fecha, const std::string& revista, const std::string& extracto);
    bool contienePalabra(const std::string& palabra) const;
};

#endif