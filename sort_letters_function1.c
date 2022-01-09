/*
  Program: sort_letters_function1.c
  Written by: Joe Dorward
  Date: 06/19/00

  This program sorts an array of characters
*/

#include <stdio.h>

#define array_size 15

void print_character_array(char [], int);  // function prototypes
void sort_character_array(char [], int);

void main(void)
{
  char character_array[array_size] = {'H', 'F', 'A', 'G', 'Z', 'R', 'U', 'C', 'I', 'L'};

  printf("\nPrint unsorted array: \n");

  print_character_array(character_array, array_size);
  
  sort_character_array(character_array,10);

  printf("\nPrint sorted array: \n");

  print_character_array(character_array, array_size);
}
//---------------------------------------------------------
void print_character_array(char character_array[], int array_elements)
{
  // this function prints the contents of the character array
  int loop_counter = 0;

  printf("\n+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ \n");
  printf("|");

  for (loop_counter = 0; loop_counter < array_elements; loop_counter++)
  {
    printf(" %c |",character_array[loop_counter]);
  }

  printf("\n+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ \n\n");

}
//---------------------------------------------------------
void sort_character_array(char character_array[], int array_elements)
{
  // this function sorts the contents of the character array
  int loop_counter_one = 0,
      loop_counter_two = 0;

  for (loop_counter_one = 0; loop_counter_one < array_elements; loop_counter_one++)
  {
    for (loop_counter_two = (loop_counter_one + 1); loop_counter_two < array_elements; loop_counter_two++)
    {
      if ( character_array[loop_counter_two] < character_array[loop_counter_one] )   // swap
      {
        character_array[array_size - 1] = character_array[loop_counter_one];

        character_array[loop_counter_one] = character_array[loop_counter_two];

        character_array[loop_counter_two] = character_array[array_size - 1];
      }
    }
  }
}
//---------------------------------------------------------