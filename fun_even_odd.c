#include<stdio.h>
void odd_even(int a)
{
	
	if(a%2==0)
	{
	printf("number %d is even:%d \n",a,a);
	}
	
	else
	{
	printf("number %d is odd:%d \n",a,a);
	}	
	

}
int main()
{
	odd_even(10); //call
	odd_even(887); //call
	odd_even(131); //call
	odd_even(112); //call
	odd_even(1); //call
	return 0;

}

