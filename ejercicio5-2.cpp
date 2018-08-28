#include <iostream>
#include <vector>
#include<cstdlib>
#include<time.h>
using namespace std;

//double randomvalue();

class Coordenada {
	private:
	double x;
	double y;
public:
	Coordenada(double = 0, double = 0);
	double obtenerX();
	double obtenerY();
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
		vector <Coordenada> ves=vector <Coordenada>(15);
	public:
		PoligonoIrreg();
		void anadeVertice(double x, double y);
		void imprimeVertices();
};

PoligonoIrreg::PoligonoIrreg(){

}

void  PoligonoIrreg::anadeVertice(double x, double y){
	if(ves.capacity()>ves.size()+1){
		ves.push_back(Coordenada(x,y));
	}
	else{
		ves.reserve(ves.size()+20);
		ves.push_back(Coordenada(x,y));
	}
}

void PoligonoIrreg::imprimeVertices(){

	
	for(Coordenada& corde: ves){
		if(corde.obtenerX()!=0 && corde.obtenerY()!=0)
		cout<<"x: "<<corde.obtenerX()<<" Y: "<<corde.obtenerY()<<endl;
	}
}


int main( int argc, char ** argv) {

int N=0, m;

Rectangulo rectangulo1(2,3,5,1);

double ancho, alto;

//PoligonoIrreg nvertices= nvertices ;
/*
cout << "Calculando el área de un rectángulo dadas sus coordenadas en un planocartesiano:\n";

rectangulo1.imprimeEsq();
*/


srand(time(NULL));

if(argc !=2)
	cin>>N;
else
		N=atoi(argv[1]);


alto = rectangulo1.obtieneSupIzq().obtenerY() - rectangulo1.obtieneInfDer().obtenerY();
ancho = rectangulo1.obtieneInfDer().obtenerX() - rectangulo1.obtieneSupIzq().obtenerX();

cout << "El área del rectángulo es = " << ancho*alto << endl;


PoligonoIrreg prueba;
/*prueba.anadeVertice(3,2);
prueba.anadeVertice(7,1);
prueba.anadeVertice(10,8);
prueba.anadeVertice(11,2);
prueba.imprimeVertices();*/





 PoligonoIrreg nvertices;
 m=N;

 for(int f=0; f<m; f++){
 	//cout<<ancho<<" "<<alto<<endl;
 	ancho=static_cast <float>(rand())/static_cast <float>(RAND_MAX);
 	alto=static_cast <double>(1+rand()%(101-1))/static_cast <double>(1.0);
 	//nvertices.anadeVertice(static_cast<double> (ancho) ,static_cast<double> (alto));
cout<<ancho<<" "<<alto<<endl;
 }
nvertices.imprimeVertices();



}

Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy) { }
	
	double Coordenada::obtenerX() {
	return x;	
	}

	double Coordenada::obtenerY(){
	return y;
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
