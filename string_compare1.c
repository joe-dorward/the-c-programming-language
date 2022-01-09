/*
  Program string_compare1.c"
  Written by: Joe Dorward
  Date: 09/10/01

  This program simulates the operation of the string compare function: strcmp()
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
  int current_string_element = 0,   // loop counter
      the_difference = 0;

  char first_string[25] = "",
       second_string[25] = "";

  // -------------------------------------------------------

  // get two strings from the user
  printf("Please enter the first string: ");
  gets(first_string);

  printf("Please enter the second string: ");
  gets(second_string);

  // -------------------------------------------------------
  // strcmp()

  current_string_element = 0;  // reset loop counter

  if ( strlen(first_string) > strlen(second_string) )
  {
    while (first_string[current_string_element] != '\0')
    {
      the_difference = the_difference + (first_string[current_string_element] - second_string[current_string_element]);

      current_string_element++;
    }
  }
  else
  {
    while (second_string[current_string_element] != '\0')
    {
      the_difference = the_difference + (first_string[current_string_element] - second_string[current_string_element]);

      current_string_element++;
    }
  }
  
  // -------------------------------------------------------

  // display the conclusion
  if (the_difference == 0) // both strings the same
  {
    printf("The strings are the same! \n");
  }
  else if (the_difference < 0) // first string first
  {
    printf("The first string comes first! \n");
  }
  else
  {
    printf("The second string comes first! \n");
  }
}