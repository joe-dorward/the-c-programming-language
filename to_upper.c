/*
  Program to_upper.c
  written by: Joe Dorward
  Date: 07/15/00

  This program converts only the lowercase letters in a mixed string to
  their uppercase versions.
*/

#include <stdio.h>

int is_lowercase(char);   // function prototypes
char lower_to_upper(char);

void main(void)
{
char the_string[25];

int element_number = 0;
 
  printf(" Please enter a string of characters: ");
  gets(the_string);

  printf("\n The uppercase version \n \t of: %s \n",the_string);

  while (the_string[element_number] != '\0')
  {
    if (is_lowercase(the_string[element_number]))
    {
      the_string[element_number] = lower_to_upper(the_string[element_number]);
    }  
    element_number++;
  }
  printf(" \t is: %s \n",the_string);
}
// ============================================================================
int is_lowercase(char character)   /* function definition */
{
  if ( (character >= 'a') && (character <= 'z') )
  {
    return(1);
  }
  else
  {
    return(0);
  }
}
/* ====================================================================== */
char lower_to_upper(char character)   /* function definition */
{
  return(character - 32);
}
/* ====================================================================== */
