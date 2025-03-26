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

/*Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la operación
getDT() para cada uno de los objetos Publicacion creados.*/
void parte_d(){
	std::list<Publicacion*>::iterator it;
	it = publicaciones.begin();

	if(publicaciones.empty()){ //aca depende como le ponga el nombre marcos globalmente
		std::cout << "No hay publicaciones para mostrar." << std::endl;
        return;
	}
    for (it ; it != publicaciones.end(); ++it) {
		std::cout << (*it)->getDT() << std::endl;
    }
}

//crear los objetos de clase Investigador hago un par para uarlos en la parte f
void parte_e(){

		inv1 = new Investigador("0000-0003-1234-5678", "Carla Olivieri", "Universidad de la Republica");
		inv2 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");
		//despues en la cleanUp la limpio

		//ahora los guardo en el map y en la lista global
		coleccion_guardarInvestigador(inv1);
		coleccion_guardarInvestigador(inv2);
}		

//Imprimir en consola el resultado de la operacion toString para cada uno de los objetos Investigador creados
void parte_f(){
	//antes de listar para que quede mas clean en la consola
	std::cout << "Lista de Investigadores: " << std::endl;

	//agora itero en el map para imprimir los investigadores
	std::map<std::string, Investigador*>::iterator it = map_investigadores.begin();
	for(it; it != map_investigadores.end(); ++it){
		std::cout << it->second->toString() << std::endl;
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

//la cleanUp de nico
void cleanUp(){
	for (std::list<Publicacion*>::iterator it = publicaciones.begin(); it != publicaciones.end(); ++it) {
		delete *it;
    }
	publicaciones.clear();
	//mari de atrevida
	map_publicaciones.clear();

	for (std::list<Investigador*>::iterator it = investigadores.begin(); it != investigadores.end(); ++it) {
		delete *it;
    }
	investigadores.clear();
	//mari de atrevida
	map_investigadores.clear();
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