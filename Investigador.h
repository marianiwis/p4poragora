#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

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

        ~Investigador() = 0;
        string getORCID() = 0;
        string toString();
        set<string> listarPublicaciones(DTFecha desde, string palabra);
};
#endif
