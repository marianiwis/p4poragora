#include "../include/ArticuloRevista.h"
#include "../include/Libro.h"
#include "../include/PaginaWeb.h"
#include "../include/Investigador.h"

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

//Crear los siguientes objetos de la clase ArticuloRevista (con el constructor por parámetros):
void parte_a(){
	//Fechas
	DTFecha fechaArt1(15,5,2023);
	DTFecha fechaArt2(10, 2, 2024);
	//Articulos
	ArticuloRevista* articulo1 = new ArticuloRevista(
        "10.1234/abc123",
        "Fundamentos de POO",
        fechaArt1,
        "Programación Avanzada",
        "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo."
    );

	
    ArticuloRevista* articulo2 = new ArticuloRevista(
        "10.4567/jkl012",
        "Utilidad de diagramas UML",
        fechaArt2,
        "Modelado de Software",
        "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases."
    );

	coleccion_guardarPublicacion(articulo1);
    coleccion_guardarPublicacion(articulo2);
}

//Crear los siguientes objetos de la clase Libro (con el constructor por parámetros):
void parte_b(){
	//KeyWordss
	std::set<std::string> keyWordsLib1;
    keyWordsLib1.insert("Diseno");
    keyWordsLib1.insert("OOP");
    keyWordsLib1.insert("Class");

	std::set<std::string> keyWordsLib2;
    keyWordsLib1.insert("Diagramas");
    keyWordsLib1.insert("UML");
    keyWordsLib1.insert("Software");
    keyWordsLib1.insert("Modelado");

	//Fechas
	DTFecha fechaLibro1(20, 8, 2022);
	DTFecha fechaLibro2(20, 8, 2022);

	//Libros
    Libro* libro1 = new Libro(
        "10.2345/def456",
        "Patrones de Diseno en c++",
        fechaLibro1,
        "Software Design",
        keyWordsLib1
    );

	Libro* libro2 = new Libro(
        "10.5678/mno345",
        "Guia de UML",
        fechaLibro2,
        "IEEE",
        keyWordsLib2
    );

	coleccion_guardarPublicacion(libro1);
	coleccion_guardarPublicacion(libro2);
}

void parte_c(){
	//Fecha
	DTFecha fechaPWeb1(20, 10, 2024);
	//PaginaWeb
    PaginaWeb* pWeb1 = new PaginaWeb(
        "10.3456/ghi789",
        "Diagramas para Principiantes",
        fechaPWeb1,
        "www.umlparaprincipiantes.com",
        "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades"
    );
	coleccion_guardarPublicacion(pWeb1);
}

/*Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la operación
getDT() para cada uno de los objetos Publicacion creados.*/
void parte_d(){
	std::list<Publicacion*>::iterator it;

	if(publicaciones.empty()){ //aca depende como le ponga el nombre marcos globalmente
		std::cout << "No hay publicaciones para mostrar." << std::endl;
        return;
	}
    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
		std::cout << (*it)->getDT() << std::endl;
    }
}

//crear los objetos de clase Investigador hago un par para uarlos en la parte f
void parte_e(){

		Investigador* inv1 = new Investigador("0000-0003-1234-5678", "Carla Olivieri", "Universidad de la Republica");
		Investigador* inv2 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");
		//despues en la cleanUp la limpio

		//ahora los guardo en el map y en la lista global
		coleccion_guardarInvestigador(inv1);
		coleccion_guardarInvestigador(inv2);
}		

//Imprimir en consola el resultado de la operacion toString para cada uno de los objetos Investigador creados
void parte_f(){
	//antes de listar para que quede mas clean en la consola
	std::cout << "Lista de Investigadores: " << std::endl;

	//ahora itero en el map para imprimir los investigadores
	std::map<std::string, Investigador*>::iterator it;
	for(it = map_investigadores.begin(); it != map_investigadores.end(); ++it){
		std::cout << it->second->toString() << std::endl;
	}

}

void parte_g(){
}

void parte_h(){
}

void parte_i() {
    Publicacion* p2 = coleccion_getPublicacion("10.4567/jkl012");
    coleccion_eliminarPublicacion(p2);
}

void parte_j() {
    Investigador* investigador = coleccion_getInvestigador("0000-0003-1234-5678");
    DTFecha desde(1, 1, 2020);
    std::set<std::string> resultados = investigador->listarPublicaciones(desde, "UML");
    for (std::set<std::string>::iterator it = resultados.begin(); it != resultados.end(); ++it)
        std::cout << *it << std::endl;
}

void parte_k(){
	parte_d();
}

//la cleanUp de nico
void cleanUp(){
	for (std::list<Publicacion*>::iterator it = publicaciones.begin(); it != publicaciones.end(); ++it) {
		delete *it;
		*it = NULL;
    }
	publicaciones.clear();
	map_publicaciones.clear();

	for (std::list<Investigador*>::iterator it = investigadores.begin(); it != investigadores.end(); ++it) {
		delete *it;
		*it = NULL;
    }
	investigadores.clear();
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