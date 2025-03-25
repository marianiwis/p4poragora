#include "../include/ArticuloRevista.h"
#include "../include/Libro.h"
#include "../include/PaginaWeb.h"
#include "../include/Investigador.h"
#include "../include/DTFecha.h"
#include "../include/DTRefer.h"

#include <iostream>
#include <list>
#include <map>

std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}

void cleanUp(){

    for (std::list<Publicacion*>::iterator it = publicaciones.begin(); it != publicaciones.end(); ++it) {
		delete *it;
    }
	publicaciones.clear();

	for (std::list<Investigador*>::iterator it = investigadores.begin(); it != investigadores.end(); ++it) {
		delete *it;
    }
	investigadores.clear();

}

void parte_a(){
}

void parte_b(){
}

void parte_c(){
}

void parte_d(){
}

void parte_e(){
}

void parte_f(){
}

void parte_g(){
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
	std::list<Publicacion*>::iterator it;

    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
		std::cout << (*it)->getDT() << std::endl;
    }

    
}

int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}