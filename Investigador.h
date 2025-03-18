#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include <string>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"
#include <list>

using namespace std;

class Investigador{
    private:
        string ORCID;
        string nombre;
        string institucion;
        
    public:
        Investigador(const string orcid, string nombre, string institucion);
        virtual ~Investigador() = 0;
        virtual string getORCID() = 0;
        virtual string toString();
        virtual list<string> listarPublicaciones(DTFecha fecha, string palabra);
};
#endif
