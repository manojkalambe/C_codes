#include <stdio.h>
#include<string.h>

int main( ) 
{
	char *str;
	int i;
	printf( "Enter a string :\n");
	for(i=0 ; i<sizeof(str); i++)
	{
		scanf("%c",&str[i]);
	}
	
 	printf( "You entered: \n");

	return 0;
}
