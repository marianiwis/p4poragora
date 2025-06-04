
//.h de la clase abstracta Publicacion

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
        DTFecha fecha;          //datatype DTFecha fecha
        std::map<std::string, Investigador*> investigadores;


    public:
        //Constructor
        Publicacion(std::string DOI, std::string titulo, DTFecha fecha);

        //Metodos virtuales puros los dejo a ver

        //Metodos og
        //getters

        virtual std::string getDOI();
        virtual std::string getTitulo();
        virtual DTFecha getFecha();
        //setters
        virtual void setTitulo(std::string Titulo);
        virtual void setFecha(DTFecha Fecha);

        //funciones que vienen del DCD
        DTRefer getDT();


        virtual void agregarAutor(Investigador* investigador); //ponemos los virtual en estos por las dudas xd
        virtual void eliminarAutor(Investigador* investigador);


        //metodos necesariamente virtuales
        virtual bool contienePalabra(const std::string& palabra) const= 0;
        virtual ~Publicacion() = 0;                         //Destructor virtual


};

#endif

