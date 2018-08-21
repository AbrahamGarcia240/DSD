#include <stdio.h>
#include <string.h>

void main()
{
	printf("Enter a number between 0 and 32767:\n");
	int number;
	scanf("%d",&number);

	char result [5];
	result[4]='\0';
	int i=0;
	for (i = 4; i >=0; i--)
	{
		result[i]=(char)(number%8)+48;
		number/=8;
	}
	
	puts(result);




}	
