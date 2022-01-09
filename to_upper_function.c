/*
  Program: to_upper_function.c
  Written by: Joe Dorward
  Date: 04/22/00

  The function in this program, returns the uppercase version of a lowercase letter
*/

#include <stdio.h>

char lower_to_upper(char);   // function prototype

void main(void)
{
  char the_character = ' ';

  /* ====================================================================== */

  printf("\n Please enter a lowercase letter: ");
  scanf("%c",&the_character);
  

  printf("\n The uppercase version of: \'%c\' ",the_character);
  printf("is: \'%c\' \n\n",lower_to_upper(the_character));   // function call
}
/* ====================================================================== */
char lower_to_upper(char character)   // function definition
{
  return(character - 32);
}
/* ====================================================================== */
