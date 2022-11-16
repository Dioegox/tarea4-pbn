COMP = g++
FLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self 
BLOQUES = Vehiculo.o Transbordador.o
LIBRERIA = libCars.so
WRAP = tare4_wrap.cxx
	
# -fPIC
%.o: %.cpp %.h
	$(COMP) $(FLAGS) -fPIC -o  $@ $< -c

#libreria
lib: $(BLOQUES)
	$(COMP) -shared $^ -o $(LIBRERIA)
	sudo mv $(LIBRERIA) /usr/lib


#wraper
wrap: tare4.i Vehiculo.h Transbordador.h
	swig -python -c++ tare4.i

# Regla para crear librería desde el wraper
_libCars.so: $(WRAP) $(BLOQUES)
	$(COMP) $(FLAGS) -fPIC -c $(WRAP) -o lib_wrap.o -I/usr/include/python3.10/
	$(COMP) -shared lib_wrap.o Vehiculo.o Transbordador.o -o _libCars.so
	
clean:
	rm -f *.o
	rm -f *.so
