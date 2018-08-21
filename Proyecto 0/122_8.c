#include <stdio.h>
#include <unistd.h>

void main()
{
	printf("Enter the number of days in the month\n");
	int days;
	scanf("%d",&days);
	printf("Enter the starting day of the week (1=Sunday, 7=Saturday):\n");
	int start;
	scanf("%d",&start);

	int i=1, j=0,k;
	do
	{
		for (k= 0; k < 7; k++)
		{
			if(j==0){
				if(k<start)
					printf("\t");
				else{

					printf("%d\t",i);
					i++;
					if(i>days)
						break;
				}
			}
			else{
				printf("%d\t",i );
				i++;
				if(i>days)
						break;
			}
			
		}
		j=1;

		printf("\n");


		
	}while(i<days);
}	
