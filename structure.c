#include<stdio.h>
#include<string.h>

	struct stud
	{
		char name[10];
		int roll_no;
		float marks;
	}std1,std2,std4;

int main()
{
	struct stud std3;
	struct stud std1={"anil",11,99.9};
	printf("std1 : %s %d %f\n",std1.name,std1.roll_no,std1.marks);
	
        strcpy(std2.name,"prasad");
        std2.roll_no=11;
        std2.marks=85.21;

        printf("std2 : %s %d %f\n",std2.name,std2.roll_no,std2.marks);		

	std3=std1;
        printf("std3 : %s %d %f\n",std3.name,std3.roll_no,std3.marks);		
	
        printf("enter the name , roll_no and marks : \n");
	scanf(" %s %d %f",std4.name,&std4.roll_no,&std4.marks);		
        printf("std4 : %s %d %f\n",std4.name,std4.roll_no,std4.marks);		
	
	return 0;
}
