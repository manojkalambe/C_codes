#include<stdio.h>
int main()
{
	int num[3][3];
	int i,j;
	printf("enter the value of array:\n");
//scanning 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&num[i][j]);
		
		}
		
	}
	
//printing 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",num[i][j]);
		
		}
		printf("\n");
		
	}

	return 0;
}

