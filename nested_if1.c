#include<stdio.h>
int main()
{
	int a,b,c,large;
	printf("Enter the number a , b and c :\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{	
			large=a;
		}
		else
		{
			large=c;
		}
	}	
	else 
	{
		if(b>c)
		{
			large=b;
		}
		else
		{
			large=c;
		}
	}

		printf("Bigger number is : %d\n",large);
	
	return 0;
}
