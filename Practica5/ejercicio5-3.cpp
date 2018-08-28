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
		void anadeVertice(int n, double x, double y);
		void imprimeVertices();
		int imprimeVeces();
		void ampliaTamano(int n);
};

int PoligonoIrreg::miau = 0;

int PoligonoIrreg::imprimeVeces(){
	cout<<"Numero de vertices: "<<miau<<endl;
}

PoligonoIrreg::PoligonoIrreg(){
	//ves.begin();

}

void PoligonoIrreg::ampliaTamano(int n){
	ves.reserve(n+1);
	//cout<<ves.capacity()<<endl;
}

void  PoligonoIrreg::anadeVertice(int n, double x, double y){
	miau++;

	//cout<<miau<<endl;
	ves[n]=Coordenada(x,y);
	//ves.insert(ves.begin()+n, Coordenada(x,y));
	//cout<<x<<endl;
	
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

std::vector <PoligonoIrreg> prueba(10000);
register int n=2000;
register int i;
register int j;


 srand(time(NULL));

for(j=1; j<=10000; j++){
	prueba[j].ampliaTamano(n);
	for (i = 1; i<=n; i++)
	 {
	 	prueba[j].anadeVertice(i,1+rand()%(101-1),1+rand()%(101-1));
	 	//prueba.imprimeVeces();
	 } 
}




//prueba.imprimeVertices();
prueba[1].imprimeVeces();
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
