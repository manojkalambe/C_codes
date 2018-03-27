#include<stdio.h>
	
int main()
{

        int i; 
	int key;
        int arr[5]={10,20,30,40,50}; //arr dec  
        //return type array_name[size];


        printf("Entered elements that you want to search : \n");
	scanf("%d",&key);

        for(i=0;i<5;i++)
        {
		if(arr[i]==key)
		{
	                printf("found.. \n");
			break;
		}
		else
		{
			printf("not found..\n");
			break;
		}
	
        }

	return 0;
}

