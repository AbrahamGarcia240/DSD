#include<iostream>
#include<string.h>

using namespace std;


int main(){
	string grande;
	string cad;	

	srand(time(NULL));
	int i=1;
	int k=1;
	for(i=1;i<=1000000;i++){
		
		cad.append(string(1,(rand()%25)+65));
		cad.append(string(1,(rand()%25)+65));
		cad.append(string(1,(rand()%25)+65));
		cad+=" ";
		
		grande.append(cad);
		cad="";
		
		




		
	}
	//cout<<endl;
	//cout<<k<<endl;
	//cout<<"CADENOTA:"<<endl;
	//cout<<grande.size()<<endl;
	//cout<<grande<<endl;

	std::string::size_type pos = 0;
	int apariciones=0;
	 while ((pos = grande.find("IPN", pos )) != std::string::npos) {
          apariciones++;
          pos += string("IPN").length();
   }
	

	cout<<apariciones<<endl;
	
}
