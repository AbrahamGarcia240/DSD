all: ejercicio1
	rm *.o
ejercicio1: Ejercicio1.cpp Rectangulo.o
	g++ Ejercicio1.cpp Rectangulo.o Coordenada.o -o  ejercicio1
Rectangulo.o: Rectangulo.cpp Coordenada.o Rectangulo.h
	g++ Rectangulo.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c

