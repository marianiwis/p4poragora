#include "DTRefer.h"
#include "DTFecha.h"

DTRefer::DTRefer(std::string d, std::string t, DTFecha f, std::set<std::string> a) : doi(d), titulo(t), fecha(f), autores(a) {}

std::ostream& operator<<(std::ostream& os, const DTRefer& dt) {
    os << dt.doi << "->" << dt.titulo << "(" << dt.fecha << ")/";

    bool coma = false;
    for (std::set<std::string>::const_iterator iterador = dt.autores.begin(); iterador != dt.autores.end(); ++iterador) {
        if (coma) os << ",";
        os << *iterador;
        coma = true;
    }
    return os;
}
