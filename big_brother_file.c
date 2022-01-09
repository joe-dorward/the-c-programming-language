/*
  Program: big_brother_file.c
  Written by: Joe Dorward
  Date: 07/15/00

  This program prints (to the screen)
  * All the details of "subjects" in a data file
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
  int subject_number = 0;  // loop counter for array

  char temp_first_name[25] = "";
  char temp_street_address[50] = "";
  char temp_birth_month[5] = "";
  char temp_employer_name[25] = "";

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

    char subject_employer_name_field[25];
    // add subject's job title field
    // add subject's income field
  };

  struct a_subject_record array_of_subjects[15];   // Declare the array

  FILE *pointer_to_file;   // file pointer variable

  // ==========================================================================
  // initialize the array

  for (subject_number = 0; subject_number < 16; subject_number++)
  {
    strcpy(array_of_subjects[subject_number].subject_first_name_field,"");
    // do middle name
    // do last name

    strcpy(array_of_subjects[subject_number].subject_street_address_field,"");
    // do city name
    // do zip code

    strcpy(array_of_subjects[subject_number].subject_birth_month_field,"");
    // do birth day
    // do birth year

    strcpy(array_of_subjects[subject_number].subject_employer_name_field,"");
    // do job title
    // do income
  }

  // ==========================================================================
  // read data into the array fields
  
  pointer_to_file = fopen("subjects.dat","r");

  // get name details
  fgets(temp_first_name,25,pointer_to_file);   // read first name from file
  temp_first_name[strlen(temp_first_name) - 1] = '\0';  // replace the '\n' at end of string

  subject_number = 0;  // reset loop counter

  while (!feof(pointer_to_file))
  {
    strcpy(array_of_subjects[subject_number].subject_first_name_field,temp_first_name);
    
    // do middle name
    // do last name

    // ------------------------------------------------------------------------
    // get address details
    fgets(temp_street_address,50,pointer_to_file);   // read street address from file
    temp_street_address[strlen(temp_street_address) - 1] = '\0';  // replace the '\n' at end of string
    strcpy(array_of_subjects[subject_number].subject_street_address_field,temp_street_address);

    // do city name
    // do zip code

    // ------------------------------------------------------------------------
    // get birth date details
    fgets(temp_birth_month,5,pointer_to_file);   // read birth month from file
    temp_birth_month[strlen(temp_birth_month) - 1] = '\0';  // replace the '\n' at end of string
    strcpy(array_of_subjects[subject_number].subject_birth_month_field,temp_birth_month);

    // do birth day
    // do birth year

    // ------------------------------------------------------------------------
    // get employment details
    fgets(temp_employer_name,25,pointer_to_file);   // read emplyer name from file
    temp_employer_name[strlen(temp_employer_name) - 1] = '\0';  // replace the '\n' at end of string
    strcpy(array_of_subjects[subject_number].subject_employer_name_field,temp_employer_name);

    // do job title
    // do income

    // ------------------------------------------------------------------------
    // get name details
    fgets(temp_first_name,25,pointer_to_file);   // read next birth month from file
    temp_first_name[strlen(temp_first_name) - 1] = '\0';  // replace the '\n' at end of string

    subject_number++;  // increment loop counter
  }
  fclose(pointer_to_file);

  // ==========================================================================
  // print contents of the array

  subject_number = 0;  // reset loop counter

  printf("                              Big Brother Knows \n\n");

  while (strcmp(array_of_subjects[subject_number].subject_first_name_field,"") != 0 )
  {
    printf("+--------------------------------------");
    printf("--------------------------------------+");
    printf("\nName: ");
    printf("\t\t%s ",array_of_subjects[subject_number].subject_first_name_field);
    // do middle name
    // do last name

    printf("\nAddress: ");
    printf("\t%s, ",array_of_subjects[subject_number].subject_street_address_field);
    // do city name
    // do zip code

    printf("\nDate of birth: ");
    printf("\t%s/ ",array_of_subjects[subject_number].subject_birth_month_field);
    // do city name
    // do zip code

    printf("\nEmployed by: ");
    printf("\t%s | ",array_of_subjects[subject_number].subject_employer_name_field);
    // do job title
    // do income

    printf("\n");
    subject_number++;  // increment loop counter
  }
  printf("+--------------------------------------");
  printf("--------------------------------------+");
  printf("\n");
}
