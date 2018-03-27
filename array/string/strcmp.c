#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	char usr[50]="root";
	char pass[50]="root";

	int user;
user=strcmp(usr,pass);
	if (user==0)
	{		
		printf("equal  \n");
	}
	else
	{
		printf("not equal  \n");
	}
	return 0;
}

