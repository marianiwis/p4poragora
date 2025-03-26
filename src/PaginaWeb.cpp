#include "../include/PaginaWeb.h"

using namespace std;

PaginaWeb::PaginaWeb(const string& DOI, const string& titulo, const DTFecha& fecha, const string& url, const string& contenidoExtraido) : Publicacion(DOI, titulo, fecha), url(url), contenidoExtraido(contenidoExtraido){}

bool PaginaWeb::contienePalabra(const string& palabra) const {
    return contenidoExtraido.find(palabra) != string::npos;
}