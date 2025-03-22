#include "DTRefer.h"


using namespace std;

DTRefer::DTRefer(const string& d, const string& t, const DTFecha& f, const set<string>& a) 
    : doi(d), titulo(t), fecha(f), autores(a) {}

string DTRefer::getDoi() const {
    return doi;
}

string DTRefer::getTitulo() const {
    return titulo;
}

DTFecha DTRefer::getFecha() const {
    return fecha;
}

const set<string>& DTRefer::getAutores() const {
    return autores;
}

ostream& operator<<(ostream& os, const DTRefer& dt) {
    os << dt.getDoi() << "->" << dt.getTitulo() << "(" << dt.getFecha() << ")/";

    bool coma = false;
    for (set<string>::const_iterator iterador = dt.getAutores().begin(); iterador != dt.getAutores().end(); ++iterador) {
        if (coma) os << ", ";
        os << *iterador;
        coma = true;
    }
    return os;
}