#include<stdio.h>
int main()
{
	int age;
	int weight;
	printf("enter the age : \n");
	scanf("%d",&age);
	printf("enter the weight : \n");
	scanf("%d",&weight);

	if(age==16)
	{
		if(weight==35)
			printf(" Boy is healthy \n");
		else 
			printf(" weak \n");
			
		
	}
	else 
	{
		printf(" weak \n");
	}

	return 0;
}

