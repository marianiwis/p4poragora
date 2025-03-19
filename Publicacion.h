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
        std::string getDOI() const;
        std::string getTitulo() const;
        DTFecha getFecha() const;
        //setters
        void setDOI(std::string DOI);
        void setTitulo(std::string Titulo);
        void setDOI(DTFecha Fecha);

        //funciones que vienen del DCD
        void getDT();

        //metodos necesariamente virtuales
        virtual bool contienePalabra(std::string palabra) = 0;

        virtual ~Publicacion() = 0;//Destructor virtual

};

#endif // PUBLICACION_H