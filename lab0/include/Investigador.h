#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include <string>
#include <map>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"

class Publicacion;
//el const en public hace que las funciones sean constantes no sus resultados
 
class Investigador{
    private:
        const std::string ORCID;
        std::string nombre, institucion;
        std::map<std::string, Publicacion*> publicaciones;
    public:
        Investigador(const std::string& ORCID, const std::string& nombre, const std::string& institucion);
        ~Investigador();

        std::string getORCID() const;
        std::string getNombre() const;
        std::string getInstitucion() const;

        void agregarPublicacion(Publicacion* pub);
        void eliminarPublicacion(Publicacion* pub);

        std::string toString() const;
        std::set<std::string> listarPublicaciones(const DTFecha& desde, const std::string& palabra);
};

#endif