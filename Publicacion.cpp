#include "Publicacion.h"
#include "Investigador.cpp"

using namespace std;

Publicacion::Publicacion(const string d, const string t, const DTFecha f) : DOI(d), titulo(t), fecha(f) {}

string Publicacion::getDOI() const {
    return DOI;
}

string Publicacion::getTitulo() const{
    return titulo;
}

DTRefer Publicacion::getDT(){
    std::set<std::string> autores;
    return DTRefer(DOI, titulo, fecha, autores);
}