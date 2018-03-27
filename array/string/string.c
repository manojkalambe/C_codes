#include <stdio.h>
#include <string.h>
int main () 
{

   char greeting[50] = "ijaj";
   char greeting1[50] = "manoj";
   char greeting2[50];
	   int lenght;
	printf("Greeting message: %s\n", greeting );
 	printf("Greeting message1: %s\n", greeting1 );
	

  
//	strcpy(greeting,greeting1);
		
//	printf("Greeting message: %s\n", greeting );

//	strcat(greeting,greeting1);
//	printf("Greeting message: %s\n", greeting );

	lenght = strlen(greeting1);
 	printf("strlen of message: %d\n", lenght );

 return 0;
}

