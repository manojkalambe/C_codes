#include<stdio.h>

struct stud
{
     	int roll_no;
	char name[10];
	char address;
	char address1;
	char address2;
	
	float marks;
	char address3;
}obj;


int main()
{
	printf("size of obj variable :%lu \n ", sizeof(obj));

	return 0;
}
