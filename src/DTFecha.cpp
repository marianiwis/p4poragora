
#include "../include/DTFecha.h"

DTFecha::DTFecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

int DTFecha::getDia() const {
    return dia;
}

int DTFecha::getMes() const {
    return mes;
}

int DTFecha::getAnio() const {
    return anio;
}

void DTFecha::setDia(int d) {
    dia = d;
}

void DTFecha::setMes(int m) {
    mes = m;
}

void DTFecha::setAnio(int a) {
    anio = a;
}

bool DTFecha::operator<(const DTFecha& fecha) const {
    if (anio != fecha.anio) 
        return anio < fecha.anio;
    if (mes != fecha.mes) 
        return mes < fecha.mes;
    return dia < fecha.dia;
}

bool DTFecha::operator>(const DTFecha& fecha) const {
    return fecha < *this;
}

bool DTFecha::operator==(const DTFecha& fecha) const {
    return (anio == fecha.anio) && (mes == fecha.mes) && (dia == fecha.dia);
}

//sobrecarga de operador para fecha
std::ostream& operator<<(std::ostream &os, const DTFecha &fecha) {
    os << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio();
    return os;
}

