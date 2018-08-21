#include <stdio.h>

void main()
{
	int odd,square;
	long i;

	printf("This program prints a table of squares \n");
	printf("Enter the number of entries in the table\n");
	int n=1;
	do{
		i=1;
		odd=3;

		for (square = 0; i <=n; odd+=2)
		{
			printf("%10ld%10d\n",i,square );
			++i;
			square+=odd;
		}
		n++;
	}while(1);

	

}	
