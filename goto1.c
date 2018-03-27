#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		goto even;
	}
	else
	{
	printf("number is odd\n");
	}
	even:
	printf("%d is even number\n",a);
	return 0;
}
