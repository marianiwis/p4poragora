#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <set>
#include <map>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Investigador.h"

class Publicacion {
protected:
    std::string DOI, titulo;
    DTFecha fecha;
    std::map<std::string, Investigador*> investigadores;

public:
    Publicacion(const std::string d, const std::string t, const DTFecha f);
    virtual ~Publicacion() = 0;

    std::string getDOI() const;
    std::string getTitulo() const;
    DTFecha getFecha() const;
    DTRefer getDT();

    void agregarAutor(Investigador* investigador);
    void eliminarAutor(Investigador* investigador);
    virtual bool contienePalabra(const std::string& palabra) const = 0;
};
#endif