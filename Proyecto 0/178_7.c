#include <stdio.h>

void main(int argc, char const *argv[])
{
	int matrix [5][5];
	int i,j;

	for (i = 0; i < 5; i++)
	{
		printf("Enter row %d: ",i+1 );
		scanf("%d %d %d %d %d", &matrix [i][0], &matrix [i][1], &matrix [i][2], &matrix [i][3], &matrix [i][4]);
	}

	printf("Row totals: ");

	for (i = 0; i < 5; i++)
	{

		int sum=0;
		for (j = 0; j < 5; j++)
		{
			sum+=matrix[i][j];
		}
		printf("%d ",sum );
	}

	printf("\nColumn totals: ");

	for (i = 0; i < 5; i++)
	{

		int sum=0;
		for (j = 0; j < 5; j++)
		{
			sum+=matrix[j][i];
		}
		printf("%d ",sum );
	}
	printf("\n");

}