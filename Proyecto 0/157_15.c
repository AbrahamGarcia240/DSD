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

	printf("factorial=%f\n", factorial(n));

}	
