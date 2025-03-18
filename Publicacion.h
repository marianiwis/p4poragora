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

        string getDOI() { return DOI; }
        string getTitulo() { return titulo; }
        DTFecha getFecha() { return fecha; }

        
        void setDOI(string doi) { DOI = doi; }
        void setTitulo(string tit) { titulo = tit; }
        void setFecha(DTFecha f) { fecha = f; }

        
        virtual DTRefer getDT() = 0;
        virtual bool contienePalabra(string palabra) = 0;



};

#endif 