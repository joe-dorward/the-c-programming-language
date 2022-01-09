/*
  Program "ascii.c
  Written by: Joe Dorward
  Date: 03/16/00

  This program demonstrates a clever way of printing ASCII
  characters, and their values

*/

#include <stdio.h>

void main(void)
{
int a_character = 0,   /* for holding a character */
    a_value = 0;       /* for holding a value */

  printf("\n Enter an ASCII character : ");
  scanf("%c",&a_character);

  printf("\n Enter an ASCII value : ");
  scanf("%d",&a_value);

  printf("\n The value of the character is: %d ",a_character);
  printf("\n The character of the value is: %c ",a_value);
}
