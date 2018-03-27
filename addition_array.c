#include<stdio.h>
#define column 3
#define row 3
int main()
{
	int i,j;
	int x[row][coloumn];
	int y[row][column];
	int z[row][coloumn];
	printf("Enter the elemnet for x(%d*%d) marix: \n",row,column);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		scanf("%d",&x[i][j]);
		}
	}
	
	printf("Enter the elemnet for y(%d*%d) marix: \n",row,column);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		scanf("%d",&y[i][j]);
		}
	}
	
	printf("addition of  the elemnet for z(%d*%d) marix: \n",row,column);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			z=x[i][j]+y[i][j];
		}
	}	
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		printf("addition is:%d%d",z[i][j]);	
		}
	}		
	return 0;
}
						















