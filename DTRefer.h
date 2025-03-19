#ifndef DTREFER_H
#define DTREFER_H

#include <string>
#include <set>
#include <iostream>

class DTFecha;

struct DTRefer{
        std::string doi, titulo;
        DTFecha fecha;
        std::set<std::string> autores;
    
        DTRefer(std::string doi, std::string titulo, const DTFecha fecha, std::set<std::string> autores);
        friend std::ostream& operator<<(std::ostream& os, const DTRefer& dt);
};

#endif