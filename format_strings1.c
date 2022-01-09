/*
  Program format_strings1.c
  Written by: Joe Dorward
  Date: 07/05/01

  This program prints out formatted names and addresses to the screen from an array.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int subject_number = 0;  // loop counter

unsigned int start_at = 0,
             stop_at = 0,
             loop_counter = 0;

char dummy = ' ';

struct a_subject_record   // define the structure
{
  char subject_name_field[25];
  char subject_address_field[50];
};

struct a_subject_record array_of_subjects[5] = {"John Smith", "21 Hill Street",
                                                "Frederick Campbell", "8 Avenue A",
                                                "J Gray", "21334 Magnolia Avenue",
                                                "Harry G. Brown", "17 Grand Avenue"};   // Declare the array


  while  ( (strcmp(array_of_subjects[subject_number].subject_name_field,"") != 0 ) )
  {
    start_at = strlen(array_of_subjects[subject_number].subject_name_field);
    stop_at = 50 - strlen(array_of_subjects[subject_number].subject_address_field);

    printf("%s ",array_of_subjects[subject_number].subject_name_field);

    for (loop_counter = start_at; loop_counter < stop_at; loop_counter++) 
    {
      printf(".");
    }

    printf("%s \n",array_of_subjects[subject_number].subject_address_field);

    subject_number++;
  }

  printf("\n");
  printf("Press any key to continue...");
  scanf("%c",&dummy);
//  scanf("%c",&dummy);
}
