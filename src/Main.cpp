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

//global variables de investigadores que despues se cleanean deah
Investigador* inv1 = NULL;
Investigador* inv2 = NULL;

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

void parte_a(){
}

void parte_b(){
}

void parte_c(){
}

void parte_d(){
}

//crear los objetos de clase Investigador hago un par para uarlos en la parte f
void parte_e(){

		inv1 = new Investigador("0000-0003-1234-5678", "Carla Olivieri", "Universidad de la Republica");
		inv2 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");
		//despues en la cleanUp la limpio
}		

//Imprimir en consola el resultado de la operacion toString para cada uno de los objetos Investigador creados
void parte_f(){
	if((inv1 != NULL) && (inv2 != NULL)){ //osea existen
		cout << "Primer Investigador: " << inv1->toString() << endl;
		cout << "Segundo Investigador: " << inv2->toString() << endl;
	}else{
		cout << "No Existen los Investigadores" << endl;
	}
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
}

//se que esto no es mio pero lo necesito
void cleanUp(){
	delete inv1;
	delete inv2;
	inv1 = NULL;
	inv2 = NULL;
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