#include "ArticuloRevista.h"

using namespace std;

ArticuloRevista::ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto) : Publicacion(DOI, titulo, fecha){
    this->revista = revista;
    this->extracto = extracto;
}

bool ArticuloRevista::contienePalabra(string palabra){
    return extracto.find(palabra) != string::npos;