#include "Libro.h"

using namespace std;

Libro::Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<string> keyWords) : Publicacion(DOI, titulo, fecha){
    this->editorial = editorial;
    this->palabrasDestacadas = keyWords;
}

/*getters*/

string Libro::getDOI(){
    return this->DOI;
}
string Libro::getTitulo(){
    return this->Titulo;
}
DTFecha Libro::getFecha(){
    return this->Fecha;
}

/*setters*/

void Libro::setDOI(string DOI){
    this->DOI = DOI;
}
void Libro::setTitulo(string titulo){
    this->Titulo = titulo;
}
void Libro::setFecha(DTFecha fecha){
    this->Fecha = fecha;
}

DTRefer Libro::getDT(){

}

bool Libro::contienePalabra(string palabra){
    
}