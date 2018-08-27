#include <stdlib.h>
#include <iostream>
using namespace std;

class Fecha{
	private:
		int dia;
		int mes;
		int anio;
		static int vecesMuestF; //esta es la variable estatica
	public:
		static int getVecesMuestF();
		Fecha(int = 3, int = 4, int = 2014);
		void incializaFecha(int,int,int);
		void muestraFecha();
};

int Fecha::vecesMuestF=0; //inicializo la variable estatica

int Fecha::getVecesMuestF(){
	//cout<<"dia es: "<<dia<<" mes es: "<<mes<<" anio es: "<<anio<<endl;
	return vecesMuestF;
}

Fecha::Fecha(int dd, int mm, int aaaa){
	mes=mm;
	dia=dd;
	anio=aaaa;
}

void Fecha::incializaFecha(int dd, int mm, int aaaa){
	anio=aaaa;
	mes=mm;
	dia=dd;
	return;
}

void Fecha::muestraFecha(){
	cout<<"La fecha es (dia-mes-anio): "<<dia<<"-"<<"mes"<<"-"<<anio<<endl;
	vecesMuestF++;
	return;
}

int main(int argc, char const *argv[])
{
	Fecha a,b,c(21,9,2000);
	b.incializaFecha(17,6,2000);
	a.muestraFecha();
	cout<<"Se ha mandado llamar muestraFecha() "<<a.getVecesMuestF()<<" veces \n";
	b.muestraFecha();
	cout<<"Se ha mandado llamar muestraFecha() "<<a.getVecesMuestF()<<" veces \n";
	c.muestraFecha();
	cout<<"Se ha mandado llamar muestraFecha() "<<a.getVecesMuestF()<<" veces \n";
	return 0;
}