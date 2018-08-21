#include <stdio.h>



void main()
{
	printf("Enter the number:\n");
    int x;
	scanf("%d",&x);

    int decenas=x/10;


    x-=decenas*10;

    x*=10;
    x+=decenas;

    printf("%d\n", x);
}	




/* 
5/6+3/4
*/