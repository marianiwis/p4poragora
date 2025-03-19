#include "ArticuloRevista.h"
using namespace std;

ArticuloRevista::ArticuloRevista(const string& doi, const string& titulo, const DTFecha& fecha, const string& revista, const string& extracto) : Publicacion(doi, titulo, fecha), revista(revista), extracto(extracto) {}

bool ArticuloRevista::contienePalabra(const string& palabra) const {
    return extracto.find(palabra) != string::npos;
}