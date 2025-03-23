#include "Publicacion.h"
#include "Investigador.h"

using namespace std;

Publicacion::Publicacion(const string d, const string t, const DTFecha f) : DOI(d), titulo(t), fecha(f) {}

string Publicacion::getDOI(){
    return DOI;
}

string Publicacion::getTitulo(){
    return titulo;
}

DTFecha Publicacion::getFecha(){
    return fecha;
}

DTRefer Publicacion::getDT(){
    std::set<std::string> autores;
    std::map<string, Investigador*>::iterator it;

    for (it = investigadores.begin(); it != investigadores.end(); ++it) {
        autores.insert(it->second->getNombre());
    }

    return DTRefer(DOI, titulo, fecha, autores);
}

void Publicacion::agregarAutor(Investigador* investigador) {
    investigadores.insert(std::make_pair(investigador->getORCID(), investigador));
    investigador->agregarPublicacion(this); //bidireccionalidad
}

void Publicacion::eliminarAutor(Investigador* investigador) {
    investigadores.erase(investigador->getORCID());
    investigador->eliminarPublicacion(this); // bidireccionalidad
}