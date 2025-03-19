#ifndef INVESTIGADOR
#define INVESTIGADOR

#include <string>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"

class Investigador{
    private:
        std::string ORCID;
        std::string nombre;
        std::string institucion;
    public:
        std::string toString();
        std::set<Publicacion> listarPublicaciones(DTFecha, std::string);
        
};




#endif