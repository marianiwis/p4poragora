#include "Libro.h"

using namespace std;

Libro::Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<string> keyWords) : Publicacion(DOI, titulo, fecha){
    this->editorial = editorial;
    this->palabrasDestacadas = keyWords;
}

bool Libro::contienePalabra(string palabra){
    
}