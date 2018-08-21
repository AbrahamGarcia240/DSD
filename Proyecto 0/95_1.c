#include <stdio.h>

void main()
{
	printf("Enter a number\n");
	int number;
	scanf("%d",&number);
	if(number>=0 && number<10)
		printf("The number has 1 digit\n");
	else if(number>=10 && number<100)
		printf("The number has 2 digits\n");
	else if(number>=100 && number<1000)
		printf("The number has 2 digits\n");
	else
		printf("The number has 4 digits\n");
}	
