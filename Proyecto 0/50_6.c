#include <stdio.h>
#include <string.h>

int madeItInt(char a){
    return (int)a-48;
}

void main()
{
	printf("Enter 2 fractions separated by a plus sign:\n");
	char fraction[7];
    gets(fraction);

    int a[2],b[2];

    a[0]=madeItInt(fraction[0]);
    a[1]=madeItInt(fraction[2]);
    b[0]=madeItInt(fraction[4]);
    b[1]=madeItInt(fraction[6]);

    printf("%d",a[0]*b[1]+b[0]*a[1]);
    printf("/");
    printf("%d\n",a[1]*b[1]);
}	




/* 
5/6+3/4
*/