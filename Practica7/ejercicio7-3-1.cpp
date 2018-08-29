#include<iostream>
#include<string.h>

using namespace std;



int main(){
	char *grande = (char*)malloc(sizeof(char));
	
	char *cad=(char*)malloc(sizeof(char)*5);

	srand(time(NULL));
	int i=1;
	int k=1;
	for(i=1;i<=1000000;i++){
		//cout<<i<<endl;
		//cout<<endl;
		for(int j=0;j<3;j++){
			cad[j]=(rand()%25)+65;
			//cout<<cad[j];
			k+=1;
		}
		
		cad[3]=' ';
		cad[4]='\0';
		//puts(cad);
		//cats(grande,cad);
	     grande=(char*) realloc(grande,strlen(grande)+strlen(cad)+1);
		strcat(grande,cad);
		//memcpy(grande,cad,strlen(cad));
		




		
	}
	//cout<<endl;
	//cout<<k<<endl;
	//cout<<"CADENOTA:"<<endl;
	grande[strlen(grande)]='\0';
	//cout<<sizeof(grande)<<endl;

	//cout<<grande<<endl;

	int apariciones=0;
	const char *tmp = grande;
	while(tmp = strstr(tmp, "IPN\0"))
	{
	   apariciones++;
	   tmp++;
	}

	cout<<"Numero de veces que se encuentra IPN "<<apariciones<<endl;

	apariciones=0;
	string stringVariable(grande);
	//cout<<stringVariable<<endl;
	if (stringVariable.find("IPN") != std::string::npos) {
	    //std::cout << "found!" << '\n';
	    apariciones++;
	}
	//cout<<"Numero de veces que se encuentra IPN "<<apariciones<<endl;


	


	free(grande);
	free(cad);
}
