/*
  Program: string_length_pointer.c
  Written by: Joe Dorward
  Date: 10/29/01

  This program uses a character pointer passed to a function
  to simulate the string length function.
*/

#include <stdio.h>

int my_strlen_pointer(const char *);  // function prototype

void main(void)
{
char input_string[50] = "";

  printf("Please enter a string: ");
  gets(input_string);

  printf("\n");
  printf("The string: %s \n",input_string);
  printf("Has: %d characters. \n\n", my_strlen_pointer(input_string) );
}
//=============================================================================
int my_strlen_pointer(const char *pointer_to_character)
{
  int element_number = 0;

  while(*pointer_to_character != '\0')
  {
    pointer_to_character++;  // increment character pointer

    element_number++;  // increment loop counter
  }
  return(element_number);
}