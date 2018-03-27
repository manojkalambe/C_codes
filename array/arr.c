#include<stdio.h>
	
int main()
{

        int i;
        int arr[5]; //arr dec  
        //return type array_name[size];

        printf("Enter the 5 elemnet for array\n");
        for(i=0;i<5;i++)
        {
                printf("Enter element for arr[%d] : ",i);
                scanf("%d",&arr[i]);
        }

        printf("Entered elements are : \n");
        for(i=0;i<5;i++)
        {
                printf("%d\n",arr[i]);
        }

	return 0;
}

