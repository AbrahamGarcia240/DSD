#include <stdio.h>



void main()
{
	printf("Please type the amount to pay:\n");
	int amount=0;
	scanf("%d",&amount);
	int twenty, ten,five;
	
	twenty=amount/20;
	printf("20 notes: %d\n",twenty );
	amount-=twenty*20;

	ten=amount/10;
	printf("10 notes: %d\n",ten );
	amount-=ten*10;

	five=amount/5;
	printf("5 notes: %d\n",five );
	amount-=five*5;

	printf("1 notes: %d\n", amount );
		
}