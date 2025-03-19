#include "PaginaWeb.h"

using namespace std;

PaginaWeb::PaginaWeb(string DOI, string titulo, DTFecha fecha, string url, string contenidoExtraido) : Publicacion(DOI, titulo, fecha){
    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
}

bool PaginaWeb::contienePalabra(string palabra){

}