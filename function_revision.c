#include<stdio.h>
//return_type fun_name(ret_type arg1,ret_type arg2,....); 
//non return type-with arg , without arg
//return type 
//1) ex void display(); //non without arg
//1) ex void add(int , int ); //non with arg
//2) ex int result(); // ret without arg
//2) ex int add(int , int); // ret with arg


void message();
void addition(int a , int b ); //dec 
int addition1(int a , int b );
int area_squre();


void message() 
{
	int a=10;
	int b=20;
	int c=a+b;
	printf("you are in message function \n");
	printf("addition of 10+20 is  %d\n",c);
}


void addition(int a , int b )
{
	int c=a+b;
	printf("you are in addition function \n");
	printf("addition is  %d\n",c);
}


int addition1(int a , int b )
{
	printf("you are in addition1 function \n");
	return a+b;
}	
int area_squre()
{
	int x;
	printf("enter the side of squre \n");
	scanf("%d",&x);
	return x*x;
}	
int main()
{
	int a=2,x=3,y=5,w=5,e=5,r,t,v;
	message();//fun call
	addition(a,x);
	r=addition1(y,w);
	printf("addition is : %d\n",r);
	printf("addition1 is : %d\n",addition1(y,w));//fun_call	
	printf("area of squre is : %d\n",area_squre());//fun_call	

	return 0;
}

///------------------------
/*

user define- ex
pre define - printf(""); sccanf() main() 







int a;
int b;
int c:

	a+b=c

100 computations  300 var 

void addtion()
{
int a ,b,c;
c=a+b
}


*/
















