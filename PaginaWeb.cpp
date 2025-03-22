#include "PaginaWeb.h"

using namespace std;

PaginaWeb::PaginaWeb(const string& d, const string& t, const DTFecha& f, const string& u, const string& c) : Publicacion(d, t, f), url(u), contenidoExtraido(c) {}

bool PaginaWeb::contienePalabra(const string& palabra) {
    
}
