#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include "DTFecha.h"
#include "DTRefer.h"
#include <set>
#include <string>

class Libro : public Publicacion{
    private:
        std::string editorial;
        std::set<std::string> palabrasDestacadas;
    public:
        //constru
        Libro(const std::string& DOI, const std::string& titulo, const DTFecha& fecha, const std::string& editorial, const std::set<std::string>& keyWords);
       //op polimorfica
       bool contienePalabra(const std::string& palabra) const;
};
#endif /*LIBRO_H*/