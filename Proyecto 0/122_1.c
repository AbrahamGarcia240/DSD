#include <stdio.h>
#include <unistd.h>

void main()
{
	int number=0;
	int max=0;
	do{
		printf("please type a number\n");
		scanf("%d",&number);
		number>max?(max=number):sleep(0);
	}while(number>0);
	
	printf("The largest number entered was%d\n",max );
}	
