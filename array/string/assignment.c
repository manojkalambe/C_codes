#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int ch;
	char str1[50]="tushar";
	char str2[50]="ijaj";
	printf("first string is : \n");
	puts(str1);
	printf("second string is : \n");
	puts(str2);
	
	printf("which operation do you want to perform  : \n");
	
	printf("1) compare\n");
	printf("2) strcat\n");
	printf("3) strcpy\n");
	printf("4) strlen\n");
	
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			strcmp(str1,str2);
			if(ch==0)
			{
				printf("equal\n");
			}
			else
			{
			printf("not equal\n");
			}
			break;
		case 2:
			strcat(str1,str2);
			printf("after concatination string is :%s\n",str1);
			break;
		case 3:
			strcpy(str1,str2);
			printf("after copy string str2 in str1 string is :%s\n",str1);
			break;
		case 4:
			
			printf("length of str1 is :%lu\n",strlen(str1));
			printf("length of str2 is :%lu\n",strlen(str2));
			break;
		default:
			printf("you enter wrong choice:\n");
			exit(0);
			
	}
}
