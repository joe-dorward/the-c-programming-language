/*
  Program "is_lower2.c"
  written by: Joe Dorward
  Date: 04/22/00

  The function in this program, returns a 1 if its character parameter
  is a lowercase letter, and 0 otherwise.
*/

#include <stdio.h>

int is_lowercase(char);   /* function prototype */

void main(void)
{
char the_character = ' ';

/* ================================================================== */

  printf("\n Please enter a lowercase letter: ");
  scanf("%c",&the_character);
  

  if (is_lowercase(the_character) == 1)   /* function call in test condition */
  {
    printf("\n The character: \'%c\' is a lowercase letter. \n\n",the_character);
  }
  else
  {
    printf("\n The character: \'%c\' is not a lowercase letter.\n\n",the_character);
  }
}
/* ================================================================== */
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
/* ================================================================== */