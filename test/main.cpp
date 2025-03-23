#include <iostream>
#include "Publicacion.h"
#include "Investigador.h"
#include "DTFecha.h"

using namespace std;

int main() {
    Investigador* inv1 = new Investigador("0000-0001-2345-6789", "Dr. Juan Pérez", "Universidad X");

    DTFecha fecha(15, 3, 2024);
    DTFecha fecha2(15, 3, 2022);

    // Crear una publicación
    Publicacion* pub1 = new Publicacion("10.1234/example", "Título de la Publicación", fecha);
    pub1->agregarAutor(inv1);

    cout << "|" << endl;

    cout << pub1->getDT() << endl;

    cout << "|" << endl;

    delete inv1;

    cout << "|" << endl;

    cout << pub1->getDT() << endl;

    cout << "|" << endl;

}