#include "../include/Investigador.h"
#include "Publicacion.h"

#include <set>
#include <iostream>
using namespace std;

Investigador::Investigador(const string& o, const string& n, const string& i) : ORCID(o), nombre(n), institucion(i) {}

Investigador::~Investigador(){
    std::map<string, Publicacion*>::iterator it;

    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        Publicacion* pub = it->second;
        pub->eliminarAutor(this);
    }

    //detalle que me acabo de acordar: hay que despues hacer un metodo para borrar del map de main
}


string Investigador::getORCID() const {
    return ORCID;
}

string Investigador::getNombre() const {
    return nombre;
}

string Investigador::getInstitucion() const {
    return institucion;
}

void Investigador::agregarPublicacion(Publicacion* publicacion) {
    publicaciones.insert(std::make_pair(publicacion->getDOI(), publicacion));
    
}

void Investigador::eliminarPublicacion(Publicacion* publicacion) {
    publicaciones.erase(publicacion->getDOI());
    
}

//comentario mari: no me gustan los const antes de las variables que pasamos por las funciones
set<string> Investigador::listarPublicaciones(const DTFecha& desde, const string& palabra){
    set<string> resultados;
    std::map<string, Publicacion*>::iterator it;

    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        cout << it->second->getTitulo() << endl;
        
    }
    return resultados;
}

string Investigador::toString() const {
    return ORCID + "->" + nombre + "/" + institucion;
}