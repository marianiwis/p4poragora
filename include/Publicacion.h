#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <map>
#include "DTRefer.h"
#include "DTFecha.h"
#include "Investigador.h"
using namespace std;

class Investigador;

class Publicacion{
    protected:

        const string DOI;        //DOI string
        string titulo;          //titulo string
        DTFecha fecha;          //datatype DTFecha fecha
        map<string, Investigador*> investigadores;


    public:
        //Constructor
        Publicacion(string DOI, string titulo, DTFecha fecha);


        //Metodos virtuales puros los dejo a ver

        //Metodos og
        //getters
        virtual string getDOI();
        virtual string getTitulo();
        virtual DTFecha getFecha();
        //setters
        virtual void setDOI(string DOI);
        virtual void setTitulo(string Titulo);
        virtual void setDOI(DTFecha Fecha);

        //funciones que vienen del DCD
        DTRefer getDT();


        virtual void agregarAutor(Investigador* investigador); //ponemos los virtual en estos por las dudas xd
        virtual void eliminarAutor(Investigador* investigador);


        //metodos necesariamente virtuales
        virtual bool contienePalabra(string palabra) = 0;
        virtual ~Publicacion() = 0;                         //Destructor virtual


};

#endif