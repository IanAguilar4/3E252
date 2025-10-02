
bin/punteros: src/punteros.cpp
	c++ src/punteros.cpp -o bin/punteros -I include

ejecutar: bin/punteros
	./bin/punteros
