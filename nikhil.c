#include<stdio.h>

int main()
{
	int a , b; //dec
	int addition;
	int sub;
	int mult;
	int rem;
	printf("enter 2 values \n");
	scanf("%d %d",&a,&b);
	
	printf("value of a is : %d \n",a);
	printf("value of b is : %d \n",b);
	
	printf("now addition is .. \n");
	addition = a+b;
	printf("addition  is : %d \n",addition);
	
	printf("now substraction is .. \n");
	sub = a-b;
	printf("sub  is : %d \n",sub);
	
	printf("now multiplication is .. \n");
	mult = a*b;
	printf("mult  is : %d \n",mult);


	printf("now reminder is .. \n");
	rem = a%b;
	printf("remi  is : %d \n",rem);



return 0;
}


