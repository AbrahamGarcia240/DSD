#include <stdio.h>



void main()
{
	printf("Enter a date (mm/dd/yyy):\n");
	char date [11] ; 
	char newDate[9];

	gets(date);
	puts(date);
	int i,j=0;

	if(date[1]=='/')
		{
			for (int i = 5; i < 9; i++)
				{
					
					newDate[j]=date[i];
					j++;
				}
				newDate[j]='0';
				j++;
			for (int i = 0; i <1; i++)
			{
				
					newDate[j]=date[i];
					j++;	
			}
			for (int i = 2; i <4; i++)
			{
				
					newDate[j]=date[i];
					j++;	
			}
			newDate[8]='\0';
		}
	else
		{
			for (int i = 6; i < 10; i++)
				{
					
					newDate[j]=date[i];
					j++;
				}
			for (int i = 0; i <2; i++)
			{
				
					newDate[j]=date[i];
					j++;	
			}
			for (int i = 3; i <5; i++)
			{
				
					newDate[j]=date[i];
					j++;	
			}
			newDate[8]='\0';
		}


	puts(newDate);
	/**/
}

