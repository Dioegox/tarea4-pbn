EXE = program
COMP = g++
FLAGS = 
BLOQUES = vehiculo.o transbordador.o
LIBRERIA = libcars.so
WRAP = cars_wrap.cxx

$(EXE): main.o $(BLOQUES)
	$(COMP) $(FLAGS) main.o -o $(EXE) -Wl,-rpath=/usr/lib -L/urs/lib -lGato
	
# Regla comodín para compilar librerías
# Se agrega el -fPIC
%.o: %.cpp %.h
	$(COMP) $(FLAGS) -fPIC -o  $@ $< -c

# Regla para crear librería compartida (.so)
lib: $(BLOQUES)
	$(COMP) -shared $^ -o $(LIBRERIA)
	sudo mv $(LIBRERIA) /usr/lib

main.o: main.cpp $(BLOQUES)
	$(COMP) $(FLAGS) -o $@ $< -c

# Regla para wraper
wrap: vehiculo.i vehiculo.h transbordador.h
	swig -python -c++ vehiculo.i

# Regla para crear librería desde el wraper
_libcars.so: $(WRAP) $(BLOQUES)
	$(COMP) $(FLAGS) -fPIC -c $(WRAP) -o lib_wrap.o -I/usr/include/python3.10/
	$(COMP) -shared lib_wrap.o vehiculo.o transbordador.o -o _libcars.so
	
clean:
	rm -f *.o
	rm -f *.so
	rm -f $(EXE)
	
run: $(EXE)
	./$(EXE)	
	
all: clean $(EXE)
