#include<stdio.h>
int main()
{
	int a;
	printf("enter any number:\n");
	scanf("%d",&a);
	if (a%2==0)
	{
	printf("number %d is even\n",a);
	}
	else
	{
	printf("number %d is odd\n",a);
	a=a+1;
	printf("now a is even number and value is %d\n",a);	
	}
	return 0;
}	
