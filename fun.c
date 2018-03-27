#include<stdio.h>

void display();//dec

int main()
{
	int addition(int a, int b)//function definition 
	{
		int add;
		add = a+b;
		return add;
	}
	void display()
	{
	printf("enter the value for c and d\n");
	}
	int c,d,x,y,z,result;
	printf("enter the value for c and d\n");
	scanf("%d%d",&c,&d);
	result=addition(c,d);//function call
	printf("result is :  %d\n",result);//call printf
	printf("enter the value of another two integer :\n");
	scanf("%d%d",&c,&d);
	z=addition(x,y);//function call
	printf("z= :  %d\n",z);


	return 0;
}




/*
return_type function_name( parameter list ) 
	{
   	body of the function
	loop
	no of statements
	printf
	scanf
	
	}

--------------------------------------------------------------

exmample:

	void addition(int a, int b)
	{
		int result; // local variable in the function 
		result = a+b;
		printf("addition of a and b is  : %d %d %d",a,b,result);
	}
-------------------------------------------------------------
	void adition()
	{
		int a,b,result;
		result = a+b;
		printf("addition is : %d ", result)
	}
-----------------------------------------------------------i
fuction with arguments :
	
return_type function_name( argument list ) 
	{i
   	body of the function
	loop
	no of statements
	printf
	scanf
	
	}
ex- 
int addition(int a , int b)//function with arguments 
{
	body;
	---;
}

call---
int y ,x;
addition(y , x)//finction call 

----------------------------------------------------------*/
