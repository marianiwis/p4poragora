#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

struct DTFecha {
    int dia, mes, anio;
    
    DTFecha(int d, int m, int a);
    
    bool operator<(const DTFecha& fecha) const;
    bool operator>(const DTFecha& fecha) const;
    bool operator==(const DTFecha& fecha) const;
};

std::ostream& operator<<(std::ostream& os, const DTFecha& fecha);

#endif