#include<stdio.h>

int main()
{

	int m = 10;
	int *iptr;
	iptr=&m;	
	printf("value of m is %d \n",m);
	printf("Address  of m is %p \n",&m);
	printf("value of m is %d \n",*iptr);
	printf("Address  of *iptr is %p \n",&iptr);
	
	iptr++;
	
	printf("Address  of *iptr is %p \n",&iptr++);
	
	return 0;
}

