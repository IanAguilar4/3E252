
bin/punteros: src/punteros.cpp
	c++ src/punteros.cpp -o bin/punteros -I include

ejecutar: bin/punteros
	./bin/punteros

bin/ejemplo: src/ejemplo.cpp
	c++ src/ejemplo.cpp -o bin/ejemplo -I include -l ftxui-screen

ejemplo: bin/ejemplo
	./bin/ejemplo

bin/proyecto: src/proyecto.cpp
	c++ src/proyecto.cpp -o bin/proyecto -I include -l ftxui-screen

proyecto: bin/proyecto
	./bin/proyecto