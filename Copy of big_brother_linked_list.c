/*
  Program: big_brother_linked_list.c
  Written by: Joe Dorward
  Date: 07/15/00

  This program prints demonstrates a linked-list
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
  int number_of_subjects = 0;  /* loop counter */

  struct a_waggon  /* define a data structure */
  {
    char subject_first_name_field[15];
    char subject_middle_name_field[15];
    char subject_last_name_field[15];

    struct a_waggon *next_waggon;
  };

  struct a_waggon *first_waggon = NULL;
  struct a_waggon *current_waggon = NULL;

  printf("===========================================\n");
  printf(" Input Data \n\n");
  do
  { /* step one; make new current-waggon */
    current_waggon = (struct a_waggon *) malloc(sizeof(struct a_waggon)); 

    /* step two; point current-waggon at place first-waggon points to */
    current_waggon->next_waggon = first_waggon;

    /* step three; point first-waggon at current-waggon */
    first_waggon = current_waggon;

    /* step four; get data for structure */
    printf("Enter subject\'s first name: ");
    scanf("%s",current_waggon->subject_first_name_field);

    number_of_subjects++;

  } while (number_of_subjects < 3);

  /* point current-waggon at place first-waggon points to */
  current_waggon->next_waggon = first_waggon->next_waggon;

  printf("\n===========================================\n");
  printf(" Output Data \n\n");

  while (current_waggon != NULL)
  {
    printf("The subject\'s name is: %s",current_waggon->subject_first_name_field);
    printf("\n");

    /* point current-waggon at the next current-waggon */
    current_waggon = current_waggon->next_waggon;
  }
  printf("\n");
}
