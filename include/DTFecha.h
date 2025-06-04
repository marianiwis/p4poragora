#ifndef DTFECHA_H
#define DTFECHA_H

#include <iostream>

class DTFecha {
    private:
        int dia, mes, anio;
    public:
        DTFecha(int dia, int mes, int anio);
        
        int getDia() const;
        int getMes() const;
        int getAnio() const;
        
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        
        //sobrecarga de operadores, ver si de verdad es necesario que sean punteros
        bool operator<(const DTFecha& fecha) const;
        bool operator>(const DTFecha& fecha) const;
        bool operator==(const DTFecha& fecha) const;
};

std::ostream& operator<<(std::ostream& os, const DTFecha& fecha);

#endif