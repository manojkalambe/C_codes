#include <stdio.h>
#include <string.h>
int main () 
{

  	char str1[50] = {'H', 'e', 'l', 'l', 'o', '\0'};
   	char str2[50] = "hello";
	int result;
	
	printf("str1: %s \n ",str1);
	
	printf("str2 is : %s \n ",str2);

	result=strcmp(str1,str2);
	
	printf("%d \n ", result);

 return 0;
}

