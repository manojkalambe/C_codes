/* else if ladder 
if(condition)	
	statement;
else if(condition)		
	statement;
else if(condition)
	statement;
else
	statement;
	
*/

#include<stdio.h>
int main()
{
	int per;
	printf("enter the per : \n");
	scanf("%d",&per);

	if(per>=85)
	{
		printf(" A+ \n");
	}
	else if(per>=70)
	{
		printf("B+ \n");
	}
	else if(per>=55)
	{
		printf(" C \n");
	}
	else
	{
		printf("pass \n");
	}
	return 0;
}

