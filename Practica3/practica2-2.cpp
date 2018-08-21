#include "fecha.h"
#include <iostream>

using namespace std;

int main() {
     Fecha a, b, c(21, 9, 1973), d(1,4,2014);
    //Fecha a, b, c(21, 15, 1973), d(1,4,2014);
   
    b.inicializaFecha(17, 6 , 2000);
    //a.muestraFecha();
    //b.muestraFecha();
    //c.muestraFecha(); 

    //cout << "Salida ejericico 3 para 1/4/2014: " << d.convierte() << endl;
    int x = 0;
    for(int i = 1; i < 2019; i++){
	b.inicializaFecha(1,1,i);
	int y = b.leapyr();
	if(y == 1){
		x++;
	}
    }
    //cout << "El año es bisiesto : " << b.leapyr() << endl;

	cout << "# de anios bisiestos: " << x << endl;
}
