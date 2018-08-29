#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <cmath>

using namespace std;

class Coordenada {
	private:
	double x;
	double y;
public:
	Coordenada(double = 0, double = 0);
	double obtenerX();
	double obtenerY();
	double getMagnitud();
};

class Rectangulo {

private:
	Coordenada superiorIzq;
	Coordenada inferiorDer;
public:

Rectangulo();
Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer);
void imprimeEsq();
Coordenada obtieneSupIzq();
Coordenada obtieneInfDer();

};

class PoligonoIrreg{
	private:
		std::vector <Coordenada> ves;
		std::vector <double> mg;
		static int miau;

	public:
		PoligonoIrreg();
		void anadeVertice(double x, double y);
		void imprimeVertices();
		int imprimeVeces();
		void ordenaA();
		
};


int PoligonoIrreg::miau = 0;

int PoligonoIrreg::imprimeVeces(){
	cout<<"Numero de vertices: "<<miau<<endl;
}

PoligonoIrreg::PoligonoIrreg(){
	

}

void  PoligonoIrreg::anadeVertice(double x, double y){
	miau++;
	ves.push_back(Coordenada(x,y));
	
}

void PoligonoIrreg::ordenaA(){
	for(Coordenada& corde:ves){
		mg.push_back(corde.getMagnitud());
	}
	
	cout<<"Sin ordenar : ";
	for(double& r:mg){
		cout<<r<<endl;
	}
	
	std::sort (mg.begin(), mg.end());

	cout << "Ordenados";
  	for (vector<double>::iterator it=mg.begin(); it!=mg.end(); ++it)
    	cout << ' ' << *it;
  	cout << '\n';
}

void PoligonoIrreg::imprimeVertices(){

	
	for(Coordenada& corde: ves){
		
		cout<<"x: "<<corde.obtenerX()<<" Y: "<<corde.obtenerY()<<endl;
	}
}




int main( ) {


PoligonoIrreg prueba;
register int n=6;
register int i;
srand(time(NULL));
for (i = n; i!=0; i--)
 {
 	prueba.anadeVertice(1+rand()%(101-1),1+rand()%(101-1));
 	//prueba.imprimeVeces();
 } 


prueba.imprimeVertices();
prueba.imprimeVeces();
prueba.ordenaA();
return 0;


}

Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy) { }
	
double Coordenada::obtenerX() {
return x;	
}

double Coordenada::obtenerY(){
return y;
}

double Coordenada::getMagnitud(){

	double ca = pow(x,2);
	double cb = pow(y,2);
	double res = sqrt(ca+cb);
	return res;
	
}

Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0){ }

Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer):superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer, yInfDer) { }

void Rectangulo::imprimeEsq() {

cout << "Para la esquina superior izquierda.\n";

cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;

cout << "Para la esquina inferior derecha.\n";

cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;
}

Coordenada Rectangulo::obtieneSupIzq() {
	return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer() {
	return inferiorDer;
}
