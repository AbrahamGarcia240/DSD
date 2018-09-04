#include <iostream>
#include <cmath>
using namespace std;

const double PI=acos(-1.0);

class Circulo
{
protected:
	double radio;
public:
	Circulo(double =1.0);
	double calcval();
	double getRadio();
};

double Circulo::getRadio(){
	return radio;
}
Circulo::Circulo(double r):radio(r){}

double Circulo::calcval(){
	return(PI*radio*radio);
}

class Cilindro:public Circulo
{
private:
	double longitud;
public:
	Cilindro( double r=1.0, double l=1.0 ):Circulo(r),longitud(l){}
	double calcval();
	
};

double Cilindro::calcval(){
	//return (longitud*Circulo::calcval());
	//return (longitud*Circulo::getRadio()*PI*Circulo::getRadio());
	return(longitud*Circulo::radio*PI*Circulo::radio);
}

int main( )
{
	Circulo Circulo_1, Circulo_2(2);
	Cilindro Cilindro_1(3,4);

	cout<<"El area de Circulo_1 es "<<Circulo_1.calcval()<<endl;
	cout<<"El area de Circulo_2 es "<<Circulo_2.calcval()<<endl;
	cout<<"El volumen de Cilindro_1 es "<<Cilindro_1.calcval()<<endl;
	Circulo_1=Cilindro_1;
	cout<<"\nEl area de Circulo_1 es ahora "<<Circulo_1.calcval()<<endl;


	return 0;
}