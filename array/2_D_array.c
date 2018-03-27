#include <stdio.h>
int main ()
{
   /* an array with 3 rows and 3 columns*/
//comment line 
   int a[3][3];
   int b[3][3];
   int c[3][3];
   int i, j;

	printf("enter the values for  matrix - A\n");

	for( i = 0; i < 3; i++ ) //ROW
	{
		for( j = 0; j < 3; j++ )//COL 
		{
			scanf("%d", &a[i][j] );
                }
  	 }
 
	printf("enter the values for  matrix - B\n");

	for( i = 0; i < 3; i++ ) //ROW
	{
		for( j = 0; j < 3; j++ )//COL 
		{
			scanf("%d", &b[i][j] );
                }
  	 }



	printf("addition of matrix - A and matrix - B\n");

	for( i = 0; i < 3; i++ ) //ROW
	{
		for( j = 0; j < 3; j++ )//COL 
		{
			c[i][j]=a[i][j]+b[i][j];
                }
  	 }

	printf("now addition of matrix is : \n");
	
	for( i = 0; i < 3; i++ ) //ROW
	{
		for( j = 0; j < 3; j++ )//COL 
		{
			printf("%d\t", c[i][j] );
                }
		printf("\n");
  	 }
   
   return 0;
}

