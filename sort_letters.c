/*
  Program "sort_letters.c"
  Written by: Joe Dorward
  Date: 06/19/00

  This program declares an array of characters, initializes it
  then sorts it.
*/

#include <stdio.h>

void main(void)
{
int loop_counter_one = 0,
    loop_counter_two = 0,
    element_number = 0;

char character_array[15] = {'H', 'F', 'A', 'G', 'Z', 'R', 'U', 'C', 'I', 'L'};

  printf("\nPrint unsorted array: \t ");

  for (element_number = 0; element_number < 10; element_number++)
  {
    printf(" %c ",character_array[element_number]);
  }

  // ==========================================================================
  // sort array

  for (loop_counter_one = 0; loop_counter_one < 10; loop_counter_one++)
  {
    for (loop_counter_two = (loop_counter_one + 1); loop_counter_two < 10; loop_counter_two++)
    {
      if ( character_array[loop_counter_two] < character_array[loop_counter_one] )   // swap
      {
        character_array[14] = character_array[loop_counter_one];

        character_array[loop_counter_one] = character_array[loop_counter_two];

        character_array[loop_counter_two] = character_array[14];
      }
    }
  }
  // ==========================================================================

  printf("\n========================================================== \n");

  printf("Print sorted array: \t ");

  for (element_number = 0; element_number < 10; element_number++)
  {
    printf(" %c ",character_array[element_number]);
  }

  printf("\n\n");
}
