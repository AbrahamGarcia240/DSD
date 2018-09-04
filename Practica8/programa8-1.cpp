#include <iostream>
#include <cmath>
using namespace std;

const doble PI=acos(-1.0);

class Circulo
{
private:
	double radio;
public:
	Circulo(double =1.0);
	double calcval();
};

Circulo::Circulo(double r):radio(r){}

