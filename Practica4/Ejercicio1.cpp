#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main( )
{
	Rectangulo rectangulo1(Coordenada(3.61,0.98),Coordenada(5.10,0.20));
	cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n"; 
	rectangulo1.imprimeEsq();
	cout << "El área del rectángulo es = " << rectangulo1.obtieneArea() << endl;
	return 0;
} 