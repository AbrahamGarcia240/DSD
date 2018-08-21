#include <stdio.h>


float factorial (float x){
	float i,fact;
	fact=x;
	for (i= 1; i <x; i++)
	{
		fact*=i;
	}
	return fact;
}

void main()
{
	printf("Please provide the vaule of n:\n");
	float n;
	scanf("%f",&n);
	
	float i=1;
	float e=1;
	if(n==0)
		printf("%f\n",e );
	for (i = 1; i <=n; i++)
	{
		e+=i/factorial(i);
	}
	printf("e=%f\n", e);

}	
