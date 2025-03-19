#include "DTFecha.h"
DTFecha::DTFecha(int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
};


int DTFecha::getDia(){
    return this->dia;
};
void DTFecha::setDia(int dia){
    this->dia = dia;
};
int DTFecha::getMes(){
    return this->mes;
};
void DTFecha::setMes(int mes){
    this->mes = mes;
};
int DTFecha::getAnio(){
    return this->anio;
};
void DTFecha::setAnio(int anio){
    this->anio = anio;
};

bool DTFecha::operator<(DTFecha fecha){
    if(this->anio < fecha->anio){
        return true;
    }else if(this->anio != fecha->anio){
        return false;
    }
    if(this->mes < fecha->mes){
        return true;
    }else if(this->mes != fecha->mes){
        return false;
    }
    if(this->dia < fecha->dia){
        return true;
    }else if(this->dia != fecha->dia){
        return false;
    }
    return false;
    
};

bool DTFecha::operator>(DTFecha fecha){
    if(this->anio > fecha->anio){
        return true;
    }else if(this->anio != fecha->anio){
        return false;
    }
    if(this->mes > fecha->mes){
        return true;
    }else if(this->mes != fecha->mes){
        return false;
    }
    if(this->dia > fecha->dia){
        return true;
    }else if(this->dia != fecha->dia){
        return false;
    }
    return false;
};

bool DTFecha::operator==(DTFecha fecha){
    return (this->anio == fecha->anio) && (this->mes == fecha->mes) && (this->dia == fecha->dia);
};