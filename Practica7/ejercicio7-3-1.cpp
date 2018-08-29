#include<iostream>
#include<string.h>

using namespace std;


int main(){
	char *grande = (char*)malloc(sizeof(char));
	
	char *cad=(char*)malloc(sizeof(char)*5);

	srand(time(NULL));
	int i=1;
	int k=1;
	for(i=1;i<=100;i++){
		//cout<<i<<endl;
		cout<<endl;
		for(int j=0;j<3;j++){
			cad[j]=(rand()%25)+65;
			//cout<<cad[j];
			k+=1;
		}
		
		cad[3]=' ';
		cad[4]='\0';
		puts(cad);
		grande=(char*) realloc(grande,strlen(grande)+strlen(cad)+1);
		strcat(grande,cad);
		//memcpy(grande,cad,strlen(cad)+1);
		




		
	}
	cout<<endl;
	cout<<k<<endl;
	cout<<"CADENOTA:"<<endl;
	cout<<sizeof(grande)<<endl;
	cout<<grande<<endl;

	free(grande);
	free(cad);
}
