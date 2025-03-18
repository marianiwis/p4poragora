#ifndef DTREFER
#define DTREFER

#include <string>
#include <set>

class DTFecha; //foward declaration para optimizar y no importar todas las funciones

typedef struct DTRefer{
    std::string DOI;
    std::string titulo;
    DTFecha fecha;
    std::set<std::string> autores;

};

#endif