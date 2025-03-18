//.h de la clase abstracta Publicacion
#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include "DTRefer.h"
#include "DTFecha.h"


class Publicacion{
    protected:
        std::string DOI;        //DOI string
        std::string Titulo;     //titulo string
        DTFecha Fecha;          //datatype DTFecha fecha

    public:
        //Constructor
        Publicacion(std::string DOI, std::string titulo, DTFecha fecha);

        //Metodos virtuales puros los dejo a ver

        //Metodos og
        //getters
        virtual std::string getDOI() = 0;
        virtual std::string getTitulo() = 0;
        virtual DTFecha getFecha() = 0;
        //setters
        virtual void setDOI(std::string DOI) = 0;
        virtual void setTitulo(std::string Titulo) = 0;
        virtual void setDOI(DTFecha Fecha) = 0;

        //funciones que vienen del DCD
        virtual void getDT() = 0;
        virtual bool contienePalabra(std::string palabra) = 0;

        virtual ~Publicacion(){} //Destructor virtual

};

#endif // PUBLICACION_H