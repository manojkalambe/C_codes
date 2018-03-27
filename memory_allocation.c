#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   char name[100];
   char *description;

   strcpy(name, "shubham\n");

   /* allocate memory dynamically */
   description = calloc(100 ,3);
	
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else {
      strcpy( description, "shubham is a DPS student in class 10th");
   }
   
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );
}
