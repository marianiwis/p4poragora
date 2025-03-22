#ifndef DTREFER_H
#define DTREFER_H

#include <string>
#include <set>
#include "DTFecha.h"

class DTRefer {
private:
    std::string doi;
    std::string titulo;
    DTFecha fecha;
    std::set<std::string> autores;

public:
    DTRefer(const std::string& d, const std::string& t, const DTFecha& f, const std::set<std::string>& a);
    
    std::string getDoi() const;
    std::string getTitulo() const;
    DTFecha getFecha() const;
    const std::set<std::string>& getAutores() const;
};

std::ostream& operator<<(std::ostream& os, const DTRefer& dt);

#endif