/*
  Program string_copy1.c"
  Written by: Joe Dorward
  Date: 09/10/01

  This program simulates the operation of the string copy function: strcpy()
  and copies the second entered string over the first
*/

#include <stdio.h>

void main(void)
{
  int current_string_element = 0;  // loop counter

  char first_string[25] = "",
       second_string[25] = "";

  // -------------------------------------------------------

  // get two strings from the user
  printf("Please enter the first string: ");
  gets(first_string);

  printf("Please enter the second string: ");
  gets(second_string);

  // -------------------------------------------------------
  // strcpy()

  // null-out the first string
  while (first_string[current_string_element] != '\0')
  {
    first_string[current_string_element] = '\0';

    current_string_element++;
  }

  current_string_element = 0;  // reset loop counter

  // copy second string over first
  while (second_string[current_string_element] != '\0')
  {
    first_string[current_string_element] = second_string[current_string_element];

    current_string_element++;
  }

  // -------------------------------------------------------
  
  printf("\n");
  printf("The first string is: \"%s\" \n",first_string);
  printf("The second string is: \"%s\" \n\n",second_string);
}
