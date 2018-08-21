#include <stdio.h>
#include <string.h>


void main()
{
	printf("Enter a phone number with this format [(XXX) XXX-XXXX]:\n");
	char phone[17];
	gets(phone);
	puts(phone);

    char aux1[4],aux2[4],aux3[5];

    memcpy(aux1,&phone[2],3);
    aux1[4]='\0';

    memcpy(aux2,&phone[7],4);
    aux2[4]='\0';

    memcpy(aux3,&phone[11],4);
    aux3[5]='\0';

      
    char * newString;
    newString=malloc(strlen(aux1)+strlen(aux2)+strlen(aux3)+3);
    memcpy(newString,aux1,strlen(aux1));
    char punto='.';
    memcpy(newString+strlen(aux1),&punto,1);
	strncat(newString,aux2,3);
	memcpy(newString+strlen(aux1)+4,&punto,1);
	memcpy(newString+strlen(aux1)+5,aux3,strlen(aux3));

	puts(newString);   
}	

/* 
[(555) 321-2357]
*/