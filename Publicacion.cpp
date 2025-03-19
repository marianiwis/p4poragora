#include "Publicacion.h"
#include "Investigador.cpp"

using namespace std;

Publicacion::Publicacion(const string d, const string t, const DTFecha f) : doi(d), titulo(t), fecha(f) {}

string Publicacion::getDOI() const {
    return doi;
}

string Publicacion::getTitulo() const{
    return titulo;
}

DTRefer Publicacion::getDT() const{
    return DTRefer(doi, titulo, fecha, autores);
}