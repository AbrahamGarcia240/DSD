#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

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
		std::vector <Coordenada> ves;
	    static int miau;

	public:
		PoligonoIrreg();
		void anadeVertice(double x, double y);
		void imprimeVertices();
		int imprimeVeces();
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

void PoligonoIrreg::imprimeVertices(){

	
	for(Coordenada& corde: ves){
		
		cout<<"x: "<<corde.obtenerX()<<" Y: "<<corde.obtenerY()<<endl;
	}
}


int main( ) {

//Rectangulo rectangulo1(2,3,5,1);

//double ancho, alto;


//cout << "Calculando el área de un rectángulo dadas sus coordenadas en un planocartesiano:\n";

//rectangulo1.imprimeEsq();


//alto = rectangulo1.obtieneSupIzq().obtenerY() - rectangulo1.obtieneInfDer().obtenerY();

//ancho = rectangulo1.obtieneInfDer().obtenerX() - rectangulo1.obtieneSupIzq().obtenerX();

//cout << "El área del rectángulo es = " << ancho*alto << endl;


PoligonoIrreg prueba;
register int n=9000000;
register int i;
 srand(time(NULL));
for (i = n; i!=0; i--)
 {
 	prueba.anadeVertice(1+rand()%(101-1),1+rand()%(101-1));
 	//prueba.imprimeVeces();
 } 


//prueba.imprimeVertices();
//prueba.imprimeVeces();
return 0;


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
