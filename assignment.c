#include<stdio.h>
int main()
{
	int a,i,j;
	for(i=0;i<=10;i++)	
	if(i%2==0)
	{
	printf("\nthe even no is:%d",i);
	}
	else
		{
		printf("\n the odd no is:%d",i);
		}
	return 0;
}

/*----------------

*
**
***
****
*****
Q3. Does an integer appear k times in first n positions of an array
Due on 2017-08-13, 18:00 IST

Weightage: 10%

Complete the base case of the following recursive function has() so that it works correctly. 

The function has(a, n, x, k) should return 1 if the integer x appears at least k times in the first n positions of integer array a (i.e., in positions a[0], a[1], ..., a[n-1]). Otherwise, it should return 0. 

Assume that n and k are non-negative integers and k <= n.

Therefore:
Assuming the array a is [1, 2, 3, 4, 5, 2, 2, 6]
and if x=2, k=2, n=8
output should be 1 because 2 appears at least 2 times in the first 8 positions.
and if x=2, k=2, n=5
output should be 0 because 2 does not appear at least 2 times in the first 5 positions.
-----------------*/	
