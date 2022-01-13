/*
  Program "student4.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of a data structure
*/

#include <stdio.h>   /* list header files */
#include <string.h>

void main(void)
{
// declare character arrays
char temp_name[25] = "";            // temporary name variable
char temp_address[50] = "";         // temparary address variable
char temp_date_of_birth[10] = "";   // temporary date of birth variable
char temp_program[15] = "";         // temporary  variable

// define a data structure
struct a_student_record
{
  char student_name_field[25];
  char student_address_field[50];
  char student_date_of_birth_field[10];
  char student_program_field[15];
};

// declare a data structure
struct a_student_record first_student_record;   

  // ================================================================
  /* get the new data to put into the data structure */
  printf(" Enter the student\'s name: ");
  gets(temp_name);
  strcpy(first_student_record.student_name_field,temp_name);

  // add the code for entering and copying other data values here

  // ================================================================
  /* Now print data from the structure */
  printf("\n +-------------------------------------+");

  printf("\n The student\'s name is: ");
  printf("%s \n\n",first_student_record.student_name_field);

  // add the code for printing other data fields here
  
}
