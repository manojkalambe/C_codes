#include <stdio.h>

int main() 
{
	FILE *fp;
	int str[100];
 
  	fp = fopen("/home/manoj/Desktop/today/sample123.txt", "w+");

   	fprintf(fp, "This is testing for fprintf...\n");

  	fputs("This is testing for fputs...\n", fp);

  	fputs("This is testing for fputs...\n", fp);
  	fputs("This is testing for fputs...\n", fp);
  	fputs("This is testing for fputs...\n", fp);

//   	printf( "enter the single character into the file ...\n");
//   	printf( "enter the string to add at the end of file ...\n");
//  	fgets(str,100, fp);
  
	fclose(fp);

	return 0;
}


/*------------

#include <stdio.h>

main() {

   FILE *fp;
   char buff[255];

   fp = fopen("/tmp/test.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

}

--------------*/
