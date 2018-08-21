#include <stdio.h>

void main()
{
	int i,j;
	
	for ( i = 6; i>0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			if(j==0 && i==3)
				printf("*");
			else if (j==1 && i==2)
				printf("*");
			else
				printf(" ");
		}
		printf("*\n");
	}
	
}