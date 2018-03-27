#include<stdio.h>

int main()
{
	int a = 5;

	int *pa;
	pa=&a;

	int **ppa;
	ppa=&pa;

	
	printf("\n");

	printf("address of a is : %p\n",&a); //,pa); 
	printf("value of a : %d\n",a);
	

	printf("Address of pa: %p\n",&pa); //,ppa);
	printf("value of *pa is = value of a : %d\n",*pa);
	
	
	printf("address of ppa is : %p\n",&ppa);
	printf("value of **ppa is =value of a : %d\n",**ppa);
	
	return 0;
}

