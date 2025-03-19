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
       //op polimorfica
       bool contienePalabra(string palabra);
};
#endif /*LIBRO_H*/