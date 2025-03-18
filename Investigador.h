#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include <string>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"
#include <list>
#include <vector>

using namespace std;

class Investigador{
    private:
        string ORCID;
        string nombre;
        string institucion;
        vector<Publicacion*> publicaciones;
        
    public:
        Investigador(const string orcid, string nombre, string institucion);

        virtual ~Investigador() = 0;
        virtual string getORCID() = 0;
        virtual string toString();
        virtual set<string> listarPublicaciones(DTFecha desde, string palabra);
};
#endif
