//.h de la clase abstracta Publicacion
#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <set>
#include <vector>
#include "DTRefer.h"
#include "DTFecha.h"

class Investigador;
using namespace std;

class Publicacion{
    public:
        Publicacion(std::string doi, std::string titulo, const DTFecha& fecha);
        //Constructor
        Publicacion(string DOI, string titulo, DTFecha fecha);

        string getDOI() { return DOI; }
        string getTitulo() { return titulo; }
        DTFecha getFecha() { return fecha; }

        
        void setDOI(string doi) { DOI = doi; }
        void setTitulo(string tit) { titulo = tit; }
        void setFecha(DTFecha f) { fecha = f; }

        
        virtual DTRefer getDT() = 0;
        virtual bool contienePalabra(string palabra) = 0;



        void agregarAutor(const std::string& autor);
};

#endif 