#include "Publicacion.h"

using namespace std;

Publicacion::Publicacion(const string d, const string t, const DTFecha f) : DOI(d), titulo(t), fecha(f) {}

Publicacion::~Publicacion() {}

string Publicacion::getDOI() const {
    return DOI;
}

string Publicacion::getTitulo() const {
    return titulo;
}

DTFecha Publicacion::getFecha() const {
    return fecha;
}

DTRefer Publicacion::getDT() {
    set<string> nombresAutores;
    for (map<string, Investigador*>::const_iterator it = investigadores.begin(); it != investigadores.end(); ++it)
        nombresAutores.insert(it->second->getNombre());
    return DTRefer(DOI, titulo, fecha, nombresAutores);
}

void Publicacion::agregarAutor(Investigador* investigador) {
    if (investigador != NULL) {
        string orcid = investigador->getORCID();
        if (investigadores.find(orcid) == investigadores.end()) {
            investigadores[orcid] = investigador;
            investigador->agregarPublicacion(this);  // Mantener la bidireccionalidad
        }
    }
}

void Publicacion::eliminarAutor(Investigador* investigador) {
    if (investigador != NULL) {
        string orcid = investigador->getORCID();
        map<string, Investigador*>::iterator it = investigadores.find(orcid);
        if (it != investigadores.end()) {
            investigadores.erase(it);
        }
    }
}