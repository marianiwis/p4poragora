#ifndef INVESTIGADOR
#define INVESTIGADOR

#include <string>
#include <map>
#include "DTFecha.h"
#include "Publicacion.h"

using namespace std;
//el const en public hace que las funciones sean constantes no sus resultados
 
class Investigador{
    private:
        const string ORCID;
        string nombre, institucion;
        map<string, Publicacion*> publicaciones;
    public:
        Investigador(const string& ORCID, const string& nombre, const string& institucion);
        ~Investigador();

        string getORCID() const;
        string getNombre() const;
        string getInstitucion() const;

        void agregarPublicacion(Publicacion* pub);
        void eliminarPublicacion(Publicacion* pub);

        string toString() const;
        set<string> listarPublicaciones(const DTFecha& desde, const string& palabra);
};




#endif