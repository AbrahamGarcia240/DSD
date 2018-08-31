#include <iostream>

using namespace std;

int main(){
	string grande = "";
	srand(time(NULL));
	int otroperro = 0;
	for(int i=0;i<100000;i++){
		string cad = "";
		for(int j=0; j<3;j++){
		cad += (rand()%25)+65;
		}
		if(cad == "IPN"){
			otroperro++;
		}
		cad += " ";
		grande.append(cad);
	}
	cout << grande<<endl;
	
	int perro = 0;
	size_t p = grande.find("IPN");
	if(p != string::npos){
		perro++;
		size_t index = p+4;
		while(index < grande.length()){
			size_t otro = grande.find("IPN",index);
			if(otro != string::npos){
				perro++;
				index = otro + 4;
			}
			else{
				break;
			}
		}
		cout << "IPN veces: " << perro << " , prueba: " << otroperro <<endl;
	}
	else{
		cout<< "La cadena IPN no se encuentra" << endl;
	}
}
