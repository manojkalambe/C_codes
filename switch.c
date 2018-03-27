#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch,a;
	
	printf("1.to print number\n");
	printf("2.division of a/10 \n");
	printf("3.addition of a+10\n");
	printf("4.multiplication of a*a\n");
	printf("5.exit\n");
	printf("enter your choice \n");
	scanf("%d",&ch);
	printf("enter the value of a:\n");
	scanf("%d",&a);

	switch(ch)
	{
		case 1:
		printf("to print number:%d \n",a);
		break;
		case 2:
		printf("division of a/10:%d \n",a/10);
		break;
		case 3:
		printf("addition of a+10:%d \n",a+10);
		break;
		case 4:
		printf("multiplication of a*a:%d \n",a*a);
		break;
		case 5:
		printf("thank you... \n");
		exit(1);

		default:
		printf("user had entered a wrong choice \n");
	}
return 0;
}	
