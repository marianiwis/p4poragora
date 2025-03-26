#include "../include/Publicacion.h"

using namespace std;

Publicacion::Publicacion(const string d, const string t, const DTFecha f) : DOI(d), titulo(t), fecha(f) {}


void Publicacion::setTitulo(std::string nuevoTitulo) {
    this->titulo = nuevoTitulo;
}

void Publicacion::setFecha(DTFecha nuevaFecha) {
    this->fecha = nuevaFecha;
}

Publicacion::~Publicacion() {
    // Destructor vacío si no hay recursos dinámicos
}

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