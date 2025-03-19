#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

struct DTFecha {
    private:
        int dia, mes, anio;
    
    public:
        DTFecha(int d, int m, int a);
        
        int getDia() const;
        int getMes() const;
        int getAnio() const;
        
        void setDia(int d);
        void setMes(int m);
        void setAnio(int a);
        
        bool operator<(const DTFecha& fecha) const;
        bool operator>(const DTFecha& fecha) const;
        bool operator==(const DTFecha& fecha) const;
};

std::ostream& operator<<(std::ostream& os, const DTFecha& fecha);

#endif