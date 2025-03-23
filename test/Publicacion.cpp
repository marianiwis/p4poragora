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

    for (it = autores.begin(); it != autores.end(); ++it) {
        autores.insert(it->second)
    }

    return DTRefer(DOI, titulo, fecha, autores);
}

void Publicacion::agregarAutor(Investigador* investigador) {
    investigadores.insert(std::make_pair(investigador->getORCID(), investigador));
    investigador.agregarAutor(this); //bidireccionalidad
}

void Publicacion::eliminarAutor(Investigador* investigador) {
    investigadores.erase(investigador->getORCID());
    investigador.eliminarAutor(this); //bidireccionalidad
}