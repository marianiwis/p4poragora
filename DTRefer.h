
#include <string>
#include <set>
#include <iostream>
#include "DTFecha.h"

class DTFecha;
using namespace std;


typedef struct DTRefer{
    string DOI;
    string titulo;
    DTFecha fecha;
    set<string> autores;

    DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores);
    string toString() const;

        friend std::ostream& operator<<(std::ostream& os, const DTRefer& dt);
};

#endif