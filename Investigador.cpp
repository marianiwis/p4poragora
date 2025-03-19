#include "Investigador.h"
#include "Publicacion.h"

Investigador::Investigador(const std::string& o, const std::string& n, const std::string& i) : ORCID(o), nombre(n), institucion(i) {}

std::string Investigador::getORCID() const {
    return ORCID;
}

std::string Investigador::getNombre() const {
    return nombre;
}

std::string Investigador::getInstitucion() const {
    return institucion;
}

void Investigador::agregarPublicacion(Publicacion* pub){
    publicaciones.insert(pub);
}

std::set<std::string> Investigador::listarPublicaciones(const DTFecha& desde, const std::string& palabra) const {
    std::set<std::string> resultados;
    for(Publicacion* pub : publicaciones)
        if(pub->getFecha() > desde && pub->contienePalabra(palabra))
            resultados.insert(pub->getDOI());
    return resultados;
}

std::string Investigador::toString() const {
    return ORCID + "->" + nombre + "/" + institucion;
}