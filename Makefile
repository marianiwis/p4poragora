# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98 -Iinclude  # Se agrega -Iinclude para que busque los headers
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

# Lista de archivos fuente
SRCFILES = $(SRC_DIR)/Main.cpp $(SRC_DIR)/DTFecha.cpp $(SRC_DIR)/DTRefer.cpp \
           $(SRC_DIR)/Investigador.cpp $(SRC_DIR)/Publicacion.cpp \
           $(SRC_DIR)/Articulo.cpp $(SRC_DIR)/Libro.cpp $(SRC_DIR)/PaginaWeb.cpp

# Generar los archivos objeto correspondientes
OBJFILES = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCFILES))

# Ejecutable final
mi_programa: $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o mi_programa $(OBJFILES)

# Reglas de compilación de cada archivo .cpp a .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Crear la carpeta obj si no existe
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Limpiar archivos compilados
clean:
	rm -f mi_programa $(OBJ_DIR)/*.o

