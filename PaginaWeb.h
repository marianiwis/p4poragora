#ifndef PAGINAWEB_H
#define PAGINAWEB_H

using namespace std;
#include <string>

class PaginaWeb : public Publicacion{

    private: 
        string url;
        string contenidoExtraido;
    
    public:
    bool contienePalabra(string palabra);



};

#endif