#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	char usr[50]="admin";
	char usr1[50];
	char pass[50]="root";
	char pass1[50];

	int user;
	int password;
	
	printf("Enter the user_name : ");
	gets(usr1);

	printf("Enter the password : ");
	gets(pass1);


user=strcmp(usr1,usr);
	if (user==0)
	{		
		printf("you enter correct user name  \n");
	}
	else
	{
		printf("you enter wrong user name  \n");
	}

password=strcmp(pass1,pass);
	if (password==0)
	{		
		printf("you enter correct password  \n");
	}
	else
	{
		printf("you enter wrong password  \n");
	}
		

	return 0;
}

