#include<stdio.h>
void check(int num)
{
	if(num%2==0)
	{
		printf("even \n ");
	}
	else
	{
		printf("odd \n ");
	}
}
int main()
{

	int i;
	int a[5];

	printf("Enter the 5 elemnet for array\n");
	for(i=0;i<5;i++)
	{
		printf("Enter element for a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}

	printf("Entered elements are : \n");	
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d is : ", a[i]);
		check(a[i]);
	}
return 0;
}
