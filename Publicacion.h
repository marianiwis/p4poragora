//.h de la clase abstracta Publicacion
#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <vector>
#include "DTRefer.h"
#include "DTFecha.h"

using namespace std;

class Publicacion{
    private:
        string DOI;        
        string titulo;     
        DTFecha fecha;          
        vector<Investigador*> autores;

    public:
        //Constructor
        Publicacion(string DOI, string titulo, DTFecha fecha);
        virtual ~Publicacion(){} 

        virtual string getDOI() = 0;
        virtual string getTitulo() = 0;
        virtual DTFecha getFecha() = 0;

        
        virtual void setDOI(string DOI) = 0;
        virtual void setTitulo(string Titulo) = 0;
        virtual void setDOI(DTFecha Fecha) = 0;

        
        virtual DTRefer getDT() = 0;
        virtual bool contienePalabra(string palabra) = 0;



};

#endif 