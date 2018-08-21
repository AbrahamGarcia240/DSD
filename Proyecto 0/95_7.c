#include <stdio.h>

void main()
{
	printf("Enter 4 numbers \n");
	int number[4];
	scanf("%d %d %d %d",&number[0],&number[1],&number[2],&number[3]);
	
	int mayor[1];
	number[0]>=number[1]?(mayor[0]=number[0]):(mayor[0]=number[1]);
	number[2]>=number[3]?(mayor[1]=number[2]):(mayor[1]=number[3]);
	mayor[1]>=mayor[0]?(printf("The biggest number is %d\n",mayor[1])):(printf("The biggest number is %d\n",mayor[0]));
}	
