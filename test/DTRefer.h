#ifndef DTREFER_H
#define DTREFER_H

#include <string>
#include <set>
#include <iostream>
#include "DTFecha.h"

class DTFecha;

class DTRefer {
private:
    std::string doi;
    std::string titulo;
    DTFecha fecha;
    std::set<std::string> autores;
public:
    DTRefer(std::string doi, std::string titulo, const DTFecha fecha, std::set<std::string> autores);

    std::string getDoi() const;
    std::string getTitulo() const;
    DTFecha getFecha() const;

    const std::set<std::string>& getAutores() const;
};

std::ostream& operator<<(std::ostream& os, const DTRefer& dt);

#endif
