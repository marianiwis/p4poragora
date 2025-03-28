#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <map>
#include "DTRefer.h"
#include "DTFecha.h"
#include "Investigador.h"

class Investigador;

class Publicacion{
    protected:
        const std::string DOI;        //DOI std::string
        std::string titulo;          //titulo std::string
        DTFecha fecha;              //datatype DTFecha fecha
        std::map<std::string, Investigador*> investigadores;
    public:
        //Constructor
        Publicacion(const std::string& DOI, const std::string& titulo, const DTFecha& fecha);

        //Metodos virtuales puros los dejo a ver

        //Metodos og
        //getters

        virtual std::string getDOI() const;
        virtual std::string getTitulo() const;
        virtual DTFecha getFecha() const;
        //setters
        virtual void setTitulo(const std::string& Titulo);
        virtual void setFecha(const DTFecha& Fecha);

        //funciones que vienen del DCD
        DTRefer getDT() const;
        std::map<std::string, Investigador*> getInvestigadores() const;

        void agregarAutor(Investigador* investigador);
        void eliminarAutor(Investigador* investigador);
        void removerAutores();

        //metodos necesariamente virtuales
        virtual bool contienePalabra(const std::string& palabra) = 0;
        virtual ~Publicacion() = 0;                         //Destructor virtual
};

#endif