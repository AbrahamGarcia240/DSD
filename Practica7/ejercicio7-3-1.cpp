#include<iostream>
#include<string.h>

using namespace std;


int main(){
	char *grande = (char*)malloc(sizeof(char));
	
	char *cad;
	srand(time(NULL));
	int i;
	for(i=0;i<100;i++){
		for(int j=0;j<3;j++){
			cad[j]=(rand()%25)+65;
		}
		cout<<i<<endl;
		cad[4]=' ';
		grande = (char*)realloc(grande,sizeof(char)*4);
		memcpy(grande,cad,4);
	}
	//cout<<grande<<endl;
}
