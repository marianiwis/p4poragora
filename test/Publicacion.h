//.h de la clase abstracta Publicacion
#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <map>
#include "DTRefer.h"
#include "DTFecha.h"
#include "Investigador.h"
using namespace std;

class Publicacion{
    protected:
        const string DOI;        //DOI string
        string titulo;          //titulo string
        DTFecha fecha;          //datatype DTFecha fecha
        map<string, Investigador*> investigadores;

    public:
        //Constructor
        Publicacion(string DOI, string titulo, DTFecha fecha);

        //Metodos es puros los dejo a ver

        //Metodos og
        //getters
         string getTitulo();
         DTFecha getFecha();
        //setters
         void setDOI(string DOI);
         void setTitulo(string Titulo);
         void setFecha(DTFecha Fecha);

        //funciones que vienen del DCD
        DTRefer getDT();

         void agregarAutor(Investigador* investigador); //ponemos los  en estos por las dudas xd
         void eliminarAutor(Investigador* investigador);

        //metodos necesariamente es                        //Destructor 

};

#endif // PUBLICACION_H