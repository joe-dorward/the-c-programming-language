/*
  Program string_length1.c"
  Written by: Joe Dorward
  Date: 09/10/01

  This program simulates the operation of the string length function: strlen()
*/

#include <stdio.h>

void main(void)
{
  int current_string_element = 0;  // loop counter

  char input_string[25] = "";

  // -------------------------------------------------------

  // get a string from the user
  printf("Please enter a string: ");
  gets(input_string);

  // -------------------------------------------------------
  // strlen(first_string)

  while (input_string[current_string_element] != '\0')
  {
    current_string_element++;  // loop counter counts the characters
  }

  // -------------------------------------------------------
  
  printf("\n");
  printf("The string: \"%s\" ",input_string);
  printf("is: %d characters long. \n\n",current_string_element);
}
