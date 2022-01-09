/*
  Program "ascii5.c"
  written by: Joe Dorward
  Date: 04/22/00

  This program demonstrates writing, and calling a function that returns the 
  ASCII value of a character parameter
*/

#include <stdio.h>

int ascii_value_of(char);   /* function prototype */
char character_of(int);   /* function prototype */

void main(void)
{
char the_character;

int the_integer;

  /* ====================================================================== */

  printf("\n Please enter an character: ");
  scanf("%c",&the_character);
  
  printf("\n The ASCII value of: \'%c\' ",the_character);
  printf("is: %d",ascii_value_of(the_character));   /* function call in printf() */
  
  /* ====================================================================== */

  printf("\n Please enter an ASCII value: ");
  scanf("%d",&the_integer);

  printf("\n The character, with the ASCII value of: %d ",the_integer);
  printf("is: %c",character_of(the_integer);   /* function call in printf() */
}
/* ====================================================================== */
int ascii_value_of(char character)   /* function definition */
{
  return(character);
}
/* ====================================================================== */