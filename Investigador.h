#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include <string>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"

class Investigador{
    private:
        std::string toString();
        std::set<Publicacion> listarPublicaciones(DTFecha, std::string);
        string ORCID;
        string nombre;
        string institucion;
        
    Investigador(const string orcid, string nombre, string institucion);
        virtual ~Investigador() = 0;
        virtual string getORCID() = 0;

    string toString();
    list<string> listarPublicaciones(DTFecha fecha, string palabra);



#endif