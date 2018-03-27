/*
if(test)
	{
	statement;
	statement;
	statement;
	}
else 
	{
	
	statement;
	statement;
	statement;
	}
*/

#include<stdio.h>
int main()
{
	int a;
	printf("enter the any number : \n");
	scanf("%d",&a);

	
	if(a%2==0)
	{
		printf(" entered number is %d even number \n",a);
	}
	else 
	{
		printf(" entered number is %d odd number \n",a);
	}

	return 0;
}

