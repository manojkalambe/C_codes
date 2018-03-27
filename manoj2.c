#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=5;i++) //outer loop is for row purpose 
	{
		for(j=1;j<=i;j++)//inner loop is for column 
		{

			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*----------------

*
**
***
****
*****

-----------------*/	
