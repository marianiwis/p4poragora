#include "DTFecha.h"

DTFecha::DTFecha(int d, int m, int a) : dia(d), mes(m), anio(a) {};

bool DTFecha::operator<(const DTFecha& fecha) const {
    if (anio != fecha.anio) return anio < fecha.anio;
    if (mes != fecha.mes) return mes < fecha.mes;
    return dia < fecha.dia;
};

bool DTFecha::operator>(const DTFecha& fecha) const {
    return fecha < *this;
};

bool DTFecha::operator==(const DTFecha& fecha) const {
    return anio == fecha.anio && mes == fecha.mes && dia == fecha.dia;
}

std::ostream& operator<<(std::ostream &os, const DTFecha &fecha) {
    os << fecha.dia << "/" << fecha.mes << "/" << fecha.anio;
    return os;
}