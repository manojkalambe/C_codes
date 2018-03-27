#include<stdio.h>
void squre(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		arr[i]=arr[i]*arr[i];
	}	
}
int main()
{

	int i;
	int b[5];

	printf("Enter the 5 elemnet for array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}

	printf("Entered elements are : \n");	
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
	
	squre(b);//passing the whole array to the function 

	printf("Now array values are : \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}

	
return 0;
}
