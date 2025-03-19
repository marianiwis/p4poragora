#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <set>
#include "DTRefer.h"
#include "DTFecha.h"

class Investigador;

class Publicacion{
    protected:
        std::string doi, titulo;
        DTFecha fecha;
        std::set<std::string>* autores;
    public:
        Publicacion(std::string doi, std::string titulo, const DTFecha& fecha);
        virtual ~Publicacion() = default;

        std::string getDOI() const;
        std::string getTitulo() const;
        DTFecha getFecha() const;

        DTRefer getDT() const;
        void agregarAutor(const std::string& autor);
        virtual bool contienePalabra(const std::string& palabra) const = 0;
};
#endif