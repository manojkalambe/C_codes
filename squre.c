#include<stdio.h>

int squre(int a)
{
	return a*a;//this return value of c
}
	
int main()
{

	int a;
	printf("enter the value for a : \n");
	scanf("%d",&a);
	printf("squre of number %d is  %d\n",a,squre(a));//function call

	return 0;
}

