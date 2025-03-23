# Nombre del ejecutable
EXEC = main

# Compilador
CXX = g++

# Flags de compilación
CXXFLAGS = -std=c++98 -Wall -Wextra -pedantic

# Archivos fuente y objeto
SRC = main.cpp Publicacion.cpp Investigador.cpp DTFecha.cpp DTRefer.cpp
OBJ = $(SRC:.cpp=.o)

# Reglas principales
all: $(EXEC)

# Compilar el ejecutable
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

# Compilar archivos individuales
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos compilados
clean:
	rm -f $(OBJ) $(EXEC)

# Limpiar solo los archivos objeto
clean_obj:
	rm -f $(OBJ)

# Ejecutar el programa
run: $(EXEC)
	./$(EXEC)

# Regla por defecto
.PHONY: all clean clean_obj run
