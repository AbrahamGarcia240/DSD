
#include <cmath>
#include <iostream>
#include "Coordenada.h"

Coordenada::Coordenada(double rr, double TT) : r(rr), teta(TT)
{ }
double Coordenada::obtenerX()
{

	return r*cosf(teta);
}
double Coordenada::obtenerY()
{
	
	return r*sinf(teta);
}