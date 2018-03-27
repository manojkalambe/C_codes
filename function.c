#include<stdio.h>
int sum(int x , int y); //declaration
void display(float a , int b);//dec

int main()
{
	int c,k;
	float result;
	int i=10;
	printf("Enter the two integer :\n");
	scanf("%d%d",&c,&k);
	sum(c,k);
	result=sum(20,150);
	printf("result of sum(20,150) : %f\n",result);

	display(10.0,110);//call
	return 0;
}

void display(float a, int b)
{
	printf("this is display function here ..  %f  %d\n",a,b);
}
int sum(int x, int y)
{
	//function definition
	int s;
	s=x+y;
	printf("addition is : %d\n",s);
	return s;
}
