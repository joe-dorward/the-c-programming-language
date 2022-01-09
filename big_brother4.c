/*
  Program "big_brother4.c"
  Written by: Joe Dorward
  Date: 03/11/00

  This program is the beginning of a real database program.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
  int loop_counter = 0,
      number_of_subjects = 0;  // loop counter

  char temp_first_name[25] = "";

  struct a_subject_record  // define a data structure
  {
    char subject_first_name_field[25];
    // add subject's middle name field
    // add subject's last name field

    char subject_street_address_field[50];
    // add subject's city field
    // add subject's zip code field

    char subject_birth_month_field[5];
    // add subject's birth day field
    // add subject's birth year field

    char subject_employer_name_field[15];
    // add subject's job title field
    // add subject's income field
  };

  struct a_subject_record array_of_subjects[5];   // Declare the array

  // =============================================================
  // get subject details
  printf("\n");

  printf(" Enter the subject\'s first name: ");
  gets(temp_first_name);

  while ( strcmp(temp_first_name,"quit") != 0 )   // while not the same
  {
    strcpy(array_of_subjects[number_of_subjects].subject_first_name_field, temp_first_name);
    // do middle name
    // do last name

    printf(" Enter the subject\'s street address: ");
    gets(array_of_subjects[number_of_subjects].subject_street_address_field);
    // do city name
    // do zip code

    printf(" Enter the subject\'s birth month: ");
    gets(array_of_subjects[number_of_subjects].subject_birth_month_field);
    // do birth day
    // do birth year

    printf(" Enter the subject\'s employer name: ");
    gets(array_of_subjects[number_of_subjects].subject_employer_name_field);
    // do job title
    // do income

    number_of_subjects++;   // increment number of subjects

    printf(" Enter the subject\'s first name: ");
    gets(temp_first_name);
  }
  // ===================================================================
  // display all entries

  for (loop_counter = 0; loop_counter < number_of_subjects; loop_counter++)
  {
    printf("\n Subject %d: is: ",loop_counter + 1);
    printf("%s, ",array_of_subjects[loop_counter].subject_first_name_field); 
    // do middle name
    // do last name

    printf("%s, ",array_of_subjects[loop_counter].subject_street_address_field); 
    // do city name
    // do zip code

    printf("%s, ",array_of_subjects[loop_counter].subject_birth_month_field); 
    // do birth day
    // do birth year

    printf("%s, ",array_of_subjects[loop_counter].subject_employer_name_field);
    // do job title
    // do income
  }
  // ===================================================================
  // Exit program

  printf("\n\n ** Exiting Program ** \n\n");
}