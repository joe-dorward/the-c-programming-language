/*
  Program "low_up3.c"
  written by: Joe Dorward
  Date: 04/22/00

  The function in this program, returns an uppercase letter, if its 
  character parameter is a lower case letter.
*/

#include <stdio.h>

int is_lowercase(char);   /* function prototype */
char lower_to_upper(char);   /* function prototype */

void main(void)
{
char the_character;

  /* ====================================================================== */

  printf("\n Please enter an character: ");
  scanf("%c",&the_character);
  
  if (is_lowercase(the_character) == 1)   /* function call in test condition */
  {
    printf("\n The uppercase version of: \'%c\' ",the_character);
    printf("is: \'%c\' ",lower_to_upper(the_character));   /* function call in printf() */
  }
  else
  {
    printf("\n The character: \'%c\' is not a lowercase letter.",the_character);
  }
}
/* ====================================================================== */
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
