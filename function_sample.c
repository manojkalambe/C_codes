#include<stdio.h>
void addition() //definition 
{
	int a,b,result;

	printf("enter the two values : \n");
	scanf("%d%d",&a,&b);
	result=a+b;
	printf("addition  is  : %d\n",result);
}
void sub()
{
	int p,q,sub;
	printf("enter the two values : \n");
	scanf("%d%d",&p,&q);
	sub=p-q;
	printf("sub  is  : %d\n",sub);

}
void odd_even()
{
	int s;
	printf("enter the only one value:\n");
	scanf("%d",&s);
	
	if(s%2==0)
	{
	printf("number is even:%d \n",s);
	}
	
	else
	{
	printf("number is odd:%d \n",s);
	}	
	

}
int main()
{
	addition(); //call
	odd_even(); //call
	sub(); //call
	return 0;

}

