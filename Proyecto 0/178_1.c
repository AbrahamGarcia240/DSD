#include <stdio.h>
#include <stdbool.h>

void main(int argc, char const *argv[])
{
	bool digit_seen[10]={false};
	bool digit_repeated[10]={false};
	int digit;
	long n;

	printf("Enter a number\n");
	scanf("%ld",&n);

	while(n>0){
		digit=n%10;
		if(digit_seen[digit])
			{
				digit_repeated[digit]=true;
			}
		digit_seen[digit]=true;
		n/=10;
	}

	printf("Repeated digit(s): ");

	int i;
	for (i = 0; i < 10; i++)
	{
		if(digit_repeated[i])
			printf("%d ",i );
	}
	printf("\n");


}