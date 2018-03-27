#include<stdio.h>
struct stud
{
     	int roll_no;
	char name[10];
	float marks;
};

int main()
{
	int i ,j;
	struct stud studarr[10];

	for(i=0;i<=4;i++)
	{

	printf("Enter the data roll_no name and marks for %d record  \n", i+1);	
	scanf("%d %s %f",&studarr[i].roll_no,studarr[i].name,&studarr[i].marks);

	}

	for(i=0;i<=4;i++)
	{

	printf("data for %d record  \n", i+1);	
	printf("%d %s %f \n",studarr[i].roll_no,studarr[i].name,studarr[i].marks);

	}

	return 0;
}
