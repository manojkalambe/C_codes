#include<stdio.h>
#define SIZE 10
void even_odd(int arr[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]%2==0)
		{
		printf("%.3d is even number and location in array is array[%d]\n",arr[i],i);
		}
		else
		{
		printf("%.3d is odd number and location in array is array[%d]\n",arr[i],i);
		}
	}		
}

int main()
{
	int arr[SIZE];
	int i;
	printf("Enter the %d elements in the array : \n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elements in the array : \n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\n",arr[i]);
	}
	even_odd(arr);

	return 0;
}
 
