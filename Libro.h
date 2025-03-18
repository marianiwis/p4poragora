#ifndef LIBRO.H
#define LIBRO.H

using namespace std;
#include <string>
#include <list>

class Libro : public Publicacion{

    private: 
        string editorial;
        list<string> palabrasDestacadas;
        
    public:
    bool contienePalabra(string palabra);


};

#endif