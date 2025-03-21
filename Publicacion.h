#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <map>
#include "DTRefer.h"
#include "DTFecha.h"
#include "Investigador.h"

class Publicacion{
    protected:
        const std::string DOI;
        std::string titulo;
        DTFecha fecha;
        std::map<std::string, Investigador*> investigadores;

    public:
        //Constructor
        Publicacion(std::string DOI, std::string titulo, DTFecha fecha);

        //Getters
        std::string getDOI() const;
        std::string getTitulo() const;
        DTFecha getFecha() const;

        //Setters
        void setDOI(std::string DOI);
        void setTitulo(std::string Titulo);
        void setDOI(DTFecha Fecha);

        //Funciones que vienen del DCD
        DTRefer Publicacion::getDT();

        void agregarAutor(Investigador* investigador);
        void eliminarAutor(Investigador* investigador);

        //Metodos necesariamente virtuales
        virtual bool contienePalabra(std::string palabra) = 0;
        virtual ~Publicacion() = 0;
};

#endif