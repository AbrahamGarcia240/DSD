#include <iostream>
#include <vector>
#include <time.h>
#include <cmath>
using namespace std;

const double PI=acos(-1.0);

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
		
	    static int miau;

	public:
		std::vector <Coordenada> ves;
		PoligonoIrreg();
		void anadeVertice(double x, double y);
		void imprimeVertices();
		void imprimeVeces();
		int getNumdeCoordenadas();

};

int PoligonoIrreg::getNumdeCoordenadas(){
	return miau;
}

int PoligonoIrreg::miau = 0;

void PoligonoIrreg::imprimeVeces(){
	cout<<"Numero de vertices: "<<miau<<endl;
}

PoligonoIrreg::PoligonoIrreg(){
	

}

void  PoligonoIrreg::anadeVertice(double x, double y){
	miau++;
	//cout<<"Anade :"<<x<<endl;
	ves.push_back(Coordenada(x,y));
	
}

void PoligonoIrreg::imprimeVertices(){

	
	for(Coordenada& corde: ves){
		
		cout<<"x: "<<corde.obtenerX()<<" Y: "<<corde.obtenerY()<<endl;
	}
}


class PoligonoReg:public PoligonoIrreg
{
private:
	
	int numVertices;
public:
	PoligonoReg(int v);
	double obtieneArea();

};

PoligonoReg::PoligonoReg(int v):numVertices(v){
	register int i;

	//primero obtengo el angulo asociado

	double angulo=static_cast<double>(360)/static_cast<double>(v);

    //cout<<angulo<<endl;
	PoligonoIrreg::anadeVertice(0,1);

	double alfa;
	for ( i = 1; i < v; i++)
	{
		alfa=angulo*i+90;
		
		//cout<<"1 :"<<alfa<<endl;
		alfa=alfa*2*PI;
		alfa=alfa/360;
		//cout<<alfa<<endl;
		//cout<<cos(alfa)<<":"<<sin(alfa)<<endl;
		PoligonoIrreg::anadeVertice(cos(alfa),sin(alfa));
	}



	
}

double PoligonoReg::obtieneArea(){
	register int i=1;
	double perimetro=0;
	double apotema=0;
	//cout<<PoligonoIrreg::ves[i].obtenerX()<<":"<<PoligonoIrreg::ves[i].obtenerY()<<" - "<<PoligonoIrreg::ves[i-1].obtenerX()<<" , "<<PoligonoIrreg::ves[i-1].obtenerY()<<endl;
		perimetro+=sqrt(pow(PoligonoIrreg::ves[i-1].obtenerX()-PoligonoIrreg::ves[i].obtenerX(),2)+pow(PoligonoIrreg::ves[i-1].obtenerY()-PoligonoIrreg::ves[i].obtenerY(),2));
	//cout<<"La distancia de un lado es de:";
			//cout<<perimetro<<endl;
			apotema=sqrt(1-pow(perimetro/2,2));
			//cout<<"el apotema es "<<apotema<<endl;
	perimetro*=PoligonoReg::numVertices;
	//cout<<perimetro<<endl;
	return perimetro*apotema/2;
}


int main( ) {
	cout<<"Ingrese el numero de vertices deseados"<<endl;
	int lados;
	cin>>lados;
	PoligonoReg x(lados);
	
	//x.imprimeVertices();cout.precision(40);
	  cout.precision(40);

  	cout<<fixed << x.obtieneArea() << " " <<endl;

	//cout<<x.obtieneArea()<<endl;
/**
Rectangulo rectangulo1(2,3,5,1);

double ancho, alto;


cout << "Calculando el área de un rectángulo dadas sus coordenadas en un planocartesiano:\n";

rectangulo1.imprimeEsq();


alto = rectangulo1.obtieneSupIzq().obtenerY() - rectangulo1.obtieneInfDer().obtenerY();

ancho = rectangulo1.obtieneInfDer().obtenerX() - rectangulo1.obtieneSupIzq().obtenerX();

cout << "El área del rectángulo es = " << ancho*alto << endl;

std::vector <PoligonoIrreg> prueba;
register int n=2000;
register int j;
register int i;
 srand(time(NULL));

for(j=0; j<10000; j++){
	prueba.push_back(PoligonoIrreg());
	for (i = n; i!=0; i--)
	 {

	 	prueba[j].anadeVertice(1+rand()%(101-1),1+rand()%(101-1));
	 	//prueba.imprimeVeces();
	 } 
}



//prueba[1].imprimeVertices();
prueba[0].imprimeVeces();
return 0;*/


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

double randomvalue(){
return (double)(1+rand()%(999999-1))/(double)1000;
//return ((double)(rand() % 101)*(rand()%2 ? 1 : 1 -1))+(((double)(rand()%101))/100);

}
