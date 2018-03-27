#include <stdio.h>
#include <string.h>
 
union Data 
{
   int i;
   float f;
   char name[30];
};
 
int main( )
{

   union Data data;        

	strcpy(data.name,"manoj");
	printf("%s\n",data.name);

	data.i=10;
	printf("%d\n",data.i);

	data.f=33.45;
	printf("%f\n",data.f);

   printf( "Memory size occupied by data : %lu\n", sizeof(data));

   return 0;
}
