#include<stdio.h>
#include<string.h>

        struct stud
        {
            
                int roll_no; //4

		char name1; //1
		char name2; //1
		char name3; //1
		char name4; //1
	
		char name5; //1

                float marks; //4
               
		int roll_no1; //4

        }std1;

int main()
{

        printf("size of structure variable  std1 : %lu\n",sizeof(std1));

//	printf("size of structure variable  std2 : %lu\n",sizeof(struct stud));


	return 0;
}
