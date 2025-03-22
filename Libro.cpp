#include "Libro.h"

using namespace std;

Libro::Libro(const string& d, const string& t, const DTFecha& f, const string& e, const set<string>& k) : Publicacion(d, t, f), editorial(e), palabrasDestacadas(k) {}

bool Libro::contienePalabra(const string& palabra) const {
    
}
