#include<stdio.h>

int subtraction(int a , int b)
{
	int c;
	c=a-b;
	return c;//this return value of c
}
	
int main()
{
	int a,b;
	int result;
	printf("enter the value for a and b: \n");
	scanf("%d%d",&a,&b);
	result=subtraction(a,b);
	printf("subtraction is : %d\n",result);//function call

	return 0;
}

