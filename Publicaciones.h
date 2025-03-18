
#ifndef PUBLICACION_H
#define PUBLICACION_H

using namespace std;
#include <string>

class Publicacion{
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
    public:
    Publicacion(const string& doi, const string& tit, const string& fecha); 
    virtual ~Publicacion() = 0;
    virtual string getDOI() = 0;
    virtual bool contienePalabra(const string palabra) = 0;

};

#endif