#include "PaginaWeb.h"

using namespace std;

PaginaWeb::PaginaWeb(string DOI, string titulo, DTFecha fecha, string url, string contenidoExtraido) : Publicacion(DOI, titulo, fecha){
    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
}

/*getters*/

string PaginaWeb::getDOI(){
    return this->DOI;
}
string PaginaWeb::getTitulo(){
    return this->Titulo;
}
DTFecha PaginaWeb::getFecha(){
    return this->Fecha;
}

/*setters*/

void PaginaWeb::setDOI(string DOI){
    this->DOI = DOI;
}
void PaginaWeb::setTitulo(string titulo){
    this->Titulo = titulo;
}
void PaginaWeb::setFecha(DTFecha fecha){
    this->Fecha = fecha;
}

DTRefer PaginaWeb::getDT(){

}

bool PaginaWeb::contienePalabra(string palabra){

}