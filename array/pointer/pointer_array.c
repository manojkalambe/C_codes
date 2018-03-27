#include <stdio.h>
 
const int MAX = 3;
 
int main () 
{

   int  var[] = {10, 100, 200};
   int i;
   int *ptr[MAX] ; //{ ptr[0],ptr[1],ptr[2] }
 
   for ( i = 0; i < MAX; i++) 
	{
      	ptr[i] = &var[i]; /* assign the address of integer. */
   	}
  
   for ( i = 0; i < MAX; i++) 
	{
      	printf("address  of var[%d] = %p\n", i, ptr[i] );
	ptr[i]++;
   	}
   for ( i = 0; i < MAX; i++) 
	{
      	printf("Value of var[%d] = %d\n", i, *ptr[i] );
   	}
   
   return 0;
}
