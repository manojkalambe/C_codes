#include<stdio.h>
int main()
{
	int a=10 , b=20 , c=2;
	int result;
	result=(a+b)/c;
	printf("result : %d \n",result);
//------------------------------------------------------
//	z=++a; 
//	printf("value of z : %d\n",z);
//	printf("value of a : %d\n",a);
//---------------------------------------------------------	

	int x,w,max;
	printf("enter the values of x and w \n");
	scanf("%d%d",&x,&w);
	max= x>w?x:w;
	printf("max number is %d\n",max);
	
	return 0;
	
}















/*   
	arithmetic 
		+
		-
		/
		*	
		% -rem

	assignment op 
	x=17
	y=z+e+1
	
	
	relational op 

	<
	>
	<=
	>=
	!=
	==

	logical op 
	AND &&
	OR ||
	NOT !

ex 	if(NUM!=0 && num==0)


	 BITWISE OP 
	AND a&b
	OR  a|b
	leftshift 1100 <<
	right shift >>
	
---------------------------------
	condition op

	test_ex?exp1:exp2
	a>b?a:b
	condition?true:flase
-----------------------------------	
x=a+b/f

*/	

