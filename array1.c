#include<stdio.h>
int main()
{
	int num[10];
	int i;
	printf("enter the value of array:\n");
	for(i=0;i<=9;i++)
	{
	scanf("%d",&num[i]);
	}
	for(i=0;i<=9;i++)
	printf("numbers are:%d\n",num[i]);
	return 0;
}

