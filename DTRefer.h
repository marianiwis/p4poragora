#ifndef DTREFER
#define DTREFER

#include <string>
#include <set>
#include "DTFecha.h"

using namespace std;


typedef struct DTRefer{
    string DOI;
    string titulo;
    DTFecha fecha;
    set<string> autores;

    DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores);
    string toString() const;

};

#endif