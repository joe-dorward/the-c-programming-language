/*
  Program "student6.c"
  Written by: Joe Dorward
  Date: 03/12/00

  Asks for student names, and puts them in an array
  then run through array printing them out
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
char student_name[25] = "",
     name_array[11][25] = {""};

int students = 0;   // loop counter variable

  printf("Please enter student\'s name: ");
  gets(student_name);

  // ask for, and put names into array
  while(strcmp(student_name,"quit") != 0)   // while not the same
  {
    strcpy( name_array[students] , student_name );
    students++;

    printf("Please enter student\'s name: ");
    gets(student_name);
  }

  printf("\n");

  // ================================================================

  // print out names from array
  for (students = 0; students < 11; students++)
  {
    printf("%2d. %s \n",(students + 1),name_array[students]);
  }
  printf("\n");
}
