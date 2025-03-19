#include "Investigador.h"
#include "Publicacion.h"

using namespace std;

Investigador::Investigador(const string& o, const string& n, const string& i) : ORCID(o), nombre(n), institucion(i) {}

string Investigador::getORCID() const {
    return ORCID;
}

string Investigador::getNombre() const {
    return nombre;
}

string Investigador::getInstitucion() const {
    return institucion;
}

void Investigador::agregarPublicacion(Publicacion* pub){
    publicaciones.insert(pub);
}

set<string> Investigador::listarPublicaciones(const DTFecha& desde, const string& palabra) const {
    set<string> resultados;
    for (set<Publicacion*>::const_iterator it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        Publicacion* pub = *it;
        if (pub->getFecha() > desde && pub->contienePalabra(palabra))
            resultados.insert(pub->getDOI());
    }
    return resultados;
}

string Investigador::toString() const {
    return ORCID + "->" + nombre + "/" + institucion;
}