/*
  Program format_strings2.c
  Written by: Joe Dorward
  Date: 07/05/01

  This program prints out formatted names and addresses to the screen from an array,
  with more formatting than the program format_strings1.c
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


  printf("\n");  // take a newline

  // draw top line of frame
  printf("       ");
  printf("%c",201);  // top left corner
  for (loop_counter = 1; loop_counter < 64; loop_counter++)
  {
    printf("%c",205);  // horizontal
  }
  printf("%c \n",187);  // top right corner


  // print names, addresses, rest of frame
  while  ( (strcmp(array_of_subjects[subject_number].subject_name_field,"") != 0 ) )
  {
    start_at = strlen(array_of_subjects[subject_number].subject_name_field);
    stop_at = 60 - strlen(array_of_subjects[subject_number].subject_address_field);

    // print name
    printf("       ");
    printf("%c ",186);  // vertical
    printf("%s ",array_of_subjects[subject_number].subject_name_field);

    // print dots
    for (loop_counter = start_at; loop_counter < stop_at; loop_counter++) 
    {
      printf(".");
    }

    // print address
    printf("%s ",array_of_subjects[subject_number].subject_address_field);
    printf("%c \n",186);  // vertical

    subject_number++;
  }

  // draw bottom line of frame
  printf("       ");
  printf("%c",200);  // bottom left corner
  for (loop_counter = 1; loop_counter < 64; loop_counter++)
  {
    printf("%c",205);  // horizontal
  }
  printf("%c \n",188);  // bottom right corner

  printf("\n");  // take a newline
  printf("\n");  // take a newline
  printf("Press any key to continue...");
  scanf("%c",&dummy);
//  scanf("%c",&dummy);
}
