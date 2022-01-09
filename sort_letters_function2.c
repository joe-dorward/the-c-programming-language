/*
  Program: sort_letters_function2.c
  Written by: Joe Dorward
  Date: 06/19/00

  This program sorts an array of characters
*/

#include <stdio.h>

#define array_size 15

void print_character_array(char *, int);  // function prototypes
void sort_character_array(char *, int);

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
void print_character_array(char *character_array, int array_elements)
{
  // this function prints the contents of the character array
  int loop_counter = 0;

  printf("\n+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ \n");
  printf("|");

  for (loop_counter = 0; loop_counter < array_elements; loop_counter++)
  {
    printf(" %c |",*character_array);
    character_array++;
  }

  printf("\n+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ \n\n");
}
//---------------------------------------------------------
void sort_character_array(char *character_array, int array_elements)
{
  // this function sorts the contents of the character array
  char temporary_character = ' ',
       *character_pointer_one = '\0',
       *character_pointer_two = '\0';

  character_pointer_one = character_array;  // initialize the pointer

  while (*character_pointer_one != '\0')
  {
    character_pointer_two = character_pointer_one + 1;
    while (*character_pointer_two != '\0')
    {
      if ( *character_pointer_two < *character_pointer_one )   // swap
      {
        temporary_character = *character_pointer_one;

        *character_pointer_one = *character_pointer_two;

        *character_pointer_two = temporary_character;
      }
      character_pointer_two = character_pointer_two + 1;
    }
    character_pointer_one = character_pointer_one + 1;
  }
}
//---------------------------------------------------------
/*
  char *character_pointer_one = '\0',
       *character_pointer_two = '\0',
       character_array[array_size] = {'H', 'F', 'A', 'G', 'Z', 'R', 'U', 'C', 'I', 'L'};

  character_pointer_one = character_array;
  character_pointer_two = character_pointer_one + 2;

  printf("Pointer one points-to: %c \n",*character_pointer_one);
  printf("Pointer two points-to: %c \n",*character_pointer_two);
*/