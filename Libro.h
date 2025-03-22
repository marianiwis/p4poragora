#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include <set>
#include <string>

class Libro : public Publicacion {
private:
    std::string editorial;
    std::set<std::string> palabrasDestacadas;
public:
    Libro(const std::string& DOI, const std::string& titulo, const DTFecha& fecha, const std::string& editorial, const std::set<std::string>& keyWords);
    virtual bool contienePalabra(const std::string& palabra) const;
};
#endif