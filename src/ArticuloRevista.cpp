#include "ArticuloRevista.h"

using namespace std;

ArticuloRevista::ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto) : Publicacion(DOI, titulo, fecha){
    this->revista = revista;
    this->extracto = extracto;
}

/*getters*/

string ArticuloRevista::getDOI(){
    return this->DOI;
}
string ArticuloRevista::getTitulo(){
    return this->Titulo;
}
DTFecha ArticuloRevista::getFecha(){
    return this->Fecha;
}

/*setters*/

void ArticuloRevista::setDOI(string DOI){
    this->DOI = DOI;
}
void ArticuloRevista::setTitulo(string titulo){
    this->Titulo = titulo;
}
void ArticuloRevista::setFecha(DTFecha fecha){
    this->Fecha = fecha;
}

DTRefer ArticuloRevista::getDT(){
    /*refer ta como struct*/
}

bool ArticuloRevista::contienePalabra(string palabra){
    return extracto.find(palabra) != string::npos;