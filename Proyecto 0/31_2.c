#include <stdio.h>
#include <math.h>

#define M_PI acos(-1.0)

void main()
{
	printf("The volume of a 10 meter sphere is:\n");
	float radius=10;
	printf("%f\n", (4.0f/3.0f)*M_PI*pow(radius,3));
	
}