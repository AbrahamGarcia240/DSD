#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <cmath>

using namespace std;
double randomvalue();
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
	int i=0;
  	for (vector<double>::iterator it=mg.begin(); it!=mg.end(); ++it){
  		cout<<"x: "<<ves[i].obtenerX()<<" Y: "<<ves[i].obtenerY();
    	cout << ' ' << *it<<endl;
    	i++;
  	}
    	


  	cout << '\n';
}

void PoligonoIrreg::imprimeVertices(){

	
	for(Coordenada& corde: ves){
		
		cout<<"x: "<<corde.obtenerX()<<" Y: "<<corde.obtenerY()<<endl;
	}
}




int main( ) {


PoligonoIrreg prueba;
register int n=200;
register int i;
srand(time(NULL));
for (i = n; i!=0; i--)
 {
 	prueba.anadeVertice(randomvalue(),randomvalue());
 	//prueba.imprimeVeces();
 } 


prueba.imprimeVertices();
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

double randomvalue(){
return (double)(1+rand()%(999999-1))/(double)1000;
//return ((double)(rand() % 101)*(rand()%2 ? 1 : 1 -1))+(((double)(rand()%101))/100);

}
