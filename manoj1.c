#include<stdio.h> //hearder
//globale variable function
// inr a=10; 
//
//
int main()
{
	int a=1,n,fact=1;
	printf("Enter the no: \n");
	scanf("%d",&n);
	printf("Entered number is : %d \n",n);
	
	while(n>=1)
	{
		fact=fact*n;
		n--;	
	}
	
	printf("factorial is : %d \n",fact);
	
	return 0;
}





