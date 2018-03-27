#include<stdio.h>
int main()
{
	int num=10; //declare variable 
	char name='c'; //declare variable 
	float marks=9.45; //declare variable 
	int *iptr; //declaring pointer 
	char *cptr; //declaring pointer 
	float *fptr; //declaring pointer 
	iptr=&num;
	cptr=&name;
	fptr=&marks;
	
	printf("address of num variable is : %p\n", &num);
	printf("address of num variable is : %p\n", iptr);
	printf("value of num variable is(by using *iptr) : %d\n", *iptr);
	printf("value of num variable is(by using num) : %d\n", num);

	printf("address of name variable is : %p\n", &name);
	printf("address of name variable is : %p\n", cptr);
	printf("value of name variable is(by using *cptr) : %c\n", *cptr);
	printf("value of name variable is(by using name) : %c\n", name);

	printf("address of marks variable is : %p\n", &marks);
	printf("address of marks variable is : %p\n", fptr);
	printf("value of marks variable is(by using *fptr) : %f\n", *fptr);
	printf("value of marks variable is(by using marks) : %f\n", marks);

	return 0;
}

