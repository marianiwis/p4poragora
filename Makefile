# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98
OBJFILES = Main.o DTFecha.o DTRefer.o Investigador.o Publicacion.o Articulo.o Libro.o PaginaWeb.o

# Ejecutable final
mi_programa: $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o mi_programa $(OBJFILES)

# Reglas de compilación
Main.o: Main.cpp DTFecha.h DTRefer.h Investigador.h Publicacion.h Articulo.h Libro.h PaginaWeb.h
	$(CXX) $(CXXFLAGS) -c Main.cpp

DTFecha.o: DTFecha.cpp DTFecha.h
	$(CXX) $(CXXFLAGS) -c DTFecha.cpp

DTRefer.o: DTRefer.cpp DTRefer.h
	$(CXX) $(CXXFLAGS) -c DTRefer.cpp

Investigador.o: Investigador.cpp Investigador.h
	$(CXX) $(CXXFLAGS) -c Investigador.cpp

Publicacion.o: Publicacion.cpp Publicacion.h
	$(CXX) $(CXXFLAGS) -c Publicacion.cpp

Articulo.o: Articulo.cpp Articulo.h
	$(CXX) $(CXXFLAGS) -c Articulo.cpp

Libro.o: Libro.cpp Libro.h
	$(CXX) $(CXXFLAGS) -c Libro.cpp

PaginaWeb.o: PaginaWeb.cpp PaginaWeb.h
	$(CXX) $(CXXFLAGS) -c PaginaWeb.cpp

# Limpieza de archivos compilados
clean:
	rm -f mi_programa $(OBJFILES)
