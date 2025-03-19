#include "Publicacion.h"
#include "Investigador.cpp"

Publicacion::Publicacion(const std::string d, const std::string t, const DTFecha f) : doi(d), titulo(t), fecha(f) {}

std::string Publicacion::getDOI() const {
    return doi;
}

std::string Publicacion::getTitulo() const{
    return titulo;
}

DTRefer Publicacion::getDT() const{
    return DTRefer(doi, titulo, fecha, autores);
}