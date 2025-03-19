#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include "DTFecha.h"
#include "DTRefer.h"
#include <set>
#include <string>

using namespace std;

class Libro : public Publicacion{
    private:
        string editorial;
        set<string> palabrasDestacadas;
    public:
        //constru
        Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<string> keyWords);
        // heredadas

       //getters
       string getDOI();
       string getTitulo();
       DTFecha getFecha();
       //setters
       void setDOI(string DOI);
       void setTitulo(string titulo);
       void setFecha(DTFecha fecha);

       DTRefer getDT();
       //op polimorfica
       bool contienePalabra(string palabra);
};
#endif /*LIBRO_H*/