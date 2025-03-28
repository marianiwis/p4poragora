#include "../include/Publicacion.h"

using namespace std;

Publicacion::Publicacion(const string& d, const string& t, const DTFecha& f) : DOI(d), titulo(t), fecha(f) {}

Publicacion::~Publicacion() {
    // Destructor vacío si no hay recursos dinámicos
}

void Publicacion::setTitulo(const string& nuevoTitulo) {
    this->titulo = nuevoTitulo;
}

void Publicacion::setFecha(const DTFecha& nuevaFecha) {
    this->fecha = nuevaFecha;
}

string Publicacion::getDOI() const{
    return DOI;
}

string Publicacion::getTitulo() const{
    return titulo;
}

DTFecha Publicacion::getFecha() const{
    return fecha;
}

DTRefer Publicacion::getDT() const{
    set<std::string> autores;
    map<string, Investigador*>::const_iterator it;
    for (it = investigadores.begin(); it != investigadores.end(); ++it)
        autores.insert(it->second->getNombre());
    return DTRefer(DOI, titulo, fecha, autores);
}

//uso insert para evitar sobreescritura 
void Publicacion::agregarAutor(Investigador* investigador) {
    investigadores.insert(std::make_pair(investigador->getORCID(), investigador)); //insert god
    investigador->agregarPublicacion(this); //bidireccionalidad
}

//idem eliminacion
void Publicacion::eliminarAutor(Investigador* investigador) {
    investigadores.erase(investigador->getORCID()); //idem de funcionalidad del insert
    investigador->eliminarPublicacion(this); // bidireccionalidad
}
