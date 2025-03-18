#ifndef ARTICULOREVISTA.H
#define ARTICULOREVISTA.H

using namespace std;
#include <string>
#include <list>

class Libro : public Publicacion{

    private: 
        string revista;
        string extracto;
    
    public:
    bool contienePalabra(string palabra);
    


        


};

#endif