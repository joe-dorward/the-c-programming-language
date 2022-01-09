/*
  Program "bigbrother2.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of a data structure
*/

#include <stdio.h>   /* list header files */
#include <string.h>

void main(void)
{
// declare character arrays
char subject_name[25] = "";            // temporary name variable
char subject_address[50] = "";         // temparary address variable
char subject_date_of_birth[10] = "";   // temporary date of birth variable
char subject_income[15] = "";         // temporary  variable

// define a data structure
struct a_subject_record
{
  char subject_name_field[25];
  char subject_address_field[50];
  char subject_date_of_birth_field[10];
  char subject_income_field[15];
};

// declare a data structure
struct a_subject_record first_subject_record;   

  // ================================================================
  /* get the new data to put into the data structure */
  printf(" Enter the subject\'s name: ");
  gets(subject_name);
  strcpy(first_subject_record.subject_name_field,subject_name);

// add the code for entering and copying other data values here

  // ================================================================
  /* Now print data from the structure */
  printf("\n +-------------------------------------+");

  printf("\n The subject\'s name is: ");
  printf("%s \n\n",first_subject_record.subject_name_field);

// add the code for printing other data fields here
}
