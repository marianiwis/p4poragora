#ifndef INVESTIGADOR
#define INVESTIGADOR

#include <string>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"

class Investigador{
    private:
        const std::string ORCID;
        std::string nombre, institucion;
        std::set<Publicacion*> publicaciones;
    public:
        Investigador(const std::string& ORCID, const std::string& nombre, const std::string& institucion);

        std::string getORCID() const;
        std::string getNombre() const;
        std::string getInstitucion() const;

        void agregarPublicacion(Publicacion* pub);

        std::string toString() const;
        std::set<std::string> listarPublicaciones(const DTFecha& desde, const std::string& palabra) const;
};




#endif