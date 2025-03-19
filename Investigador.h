#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include <string>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"
#include <list>
#include <vector>


class Publicacion;
using namespace std;

class Investigador{
    private:
        std::string ORCID, nombre, institucion;
        std::set<Publicacion*> publicaciones;
        string ORCID;
        string nombre;
        string institucion;
        
    public:
        Investigador(const std::string& ORCID, const std::string& nombre, const std::string& institucion);
        std::string getORCID() const;
        std::string getNombre() const;
        std::string getInstitucion() const;
        Investigador(const string orcid, string nombre, string institucion);

        std::string toString() const;
        std::set<std::string> listarPublicaciones(const DTFecha& desde, const std::string& palabra) const;
        set<string> listarPublicaciones(DTFecha desde, string palabra);
};
#endif
