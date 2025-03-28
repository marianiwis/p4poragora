#include "../include/Libro.h"

using namespace std;

Libro::Libro(const string& DOI, const string& titulo, const DTFecha& fecha, const string& editorial, const set<string>& keyWords) : Publicacion(DOI, titulo, fecha), editorial(editorial), palabrasDestacadas(keyWords){}

bool Libro::contienePalabra(const string& palabra){
    set<string>::const_iterator it; //const iterator para asegurar no modificar el set
    for (it = palabrasDestacadas.begin(); it != palabrasDestacadas.end(); ++it)
        if (*it == palabra) 
            return true;
    return false;
}