#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int numeroDeLenguajes;

	cout << "!!!Hola!!!.\n" << "Bienvenido a C++\n";
	cout << "Cuantos lenguajes de programacion dominas?";
	cin >> numeroDeLenguajes;

	if (numeroDeLenguajes<1)
	{
		cout << "Seria recomendamble aprender antes un lenguaje mas sencillo...\n"<<"por ejemplo C, aunque nada es imposible";		
	}
	else{
		cout<<"Este curso sera sencillo para ti";
	}

	return 0;
}