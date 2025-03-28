#ifndef DTREFER_H
#define DTREFER_H

#include <string>
#include <set>
#include <iostream>
#include "DTFecha.h"

class DTRefer {
private:
    std::string doi, titulo;
    DTFecha fecha;
    std::set<std::string> autores;

public:
    DTRefer(const std::string& doi, const std::string& titulo, const DTFecha& fecha, const std::set<std::string>& autores);

    std::string getDoi() const;
    std::string getTitulo() const;
    DTFecha getFecha() const;
    const std::set<std::string>& getAutores() const;
};

std::ostream& operator<<(std::ostream& os, const DTRefer& dt);

#endif
