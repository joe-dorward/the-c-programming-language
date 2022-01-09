/*
  Program: character_pointers.c
  Written by: Joe Dorward
  Date: 06/19/00

  This program demonstrates character pointers with an array of characters
*/

#include <stdio.h>

#define array_size 15

void print_character_array(char [], int);  // function prototype

void main(void)
{
  char *character_pointer_one = '\0',
       *character_pointer_two = '\0',
       character_array[array_size] = {'H', 'F', 'A', 'G', 'Z', 'R', 'U', 'C', 'I', 'L'};

  character_pointer_one = character_array;
  character_pointer_two = character_pointer_one + 2;

  printf("Pointer one points-to: %c \n",*character_pointer_one);
  printf("Pointer two points-to: %c \n",*character_pointer_two);

  printf("\nPrint unsorted array: \n");

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
