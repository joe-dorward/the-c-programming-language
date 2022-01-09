/*
  Program "big_brother3.c"
  Written by: Joe Dorward
  Date: 03/12/00

  This program asks for subject's names, counts them and puts them in an array.
  Then it runs through the array printing them out.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
char subject_name[25] = "",
     name_array[11][25] = {""};

int number_of_subjects = 0,
    loop_counter = 0;   // loop counter variable

  printf("Please enter subject\'s name: ");
  gets(subject_name);

  // ask for, and put names into array
  while ( strcmp(subject_name,"quit") != 0 )   // while not the same
  {
    strcpy( name_array[number_of_subjects] , subject_name );
    number_of_subjects++;

    printf("Please enter subject\'s name: ");
    gets(subject_name);
  }

  printf("\n============================== \n");
  printf("The number of subjects is: %d ",number_of_subjects);
  printf("\n============================== \n");

  // ================================================================

  // print out names from array
  for (loop_counter = 0; loop_counter < number_of_subjects; loop_counter++)
  {
    printf("Subject %2d is: %s \n",(loop_counter + 1), name_array[loop_counter]);
  }
  printf("\n");
}
