#include <stdio.h>

void main()
{
	printf("Enter a numerical grade \n");
	int number;
	scanf("%d",&number);
	if (number>100)
	{
		printf("Error, please check the grade\n");
	}
	else{
		number/=10;
		
		switch(number){
			case 9:
				printf("A\n");
				break;
			case 8:
				printf("B\n");
				break;
			case 7:
				printf("C\n");
				break;
			case 6:
				printf("D\n");
				break;
			case 10:
				printf("A\n");
				break;
			default:
				printf("F\n");
				break;
		}
	}
	
}	
