/*
  Program "ascii1.c
  Written by: Joe Dorward
  Date: 03/16/00

  This program demonstrates a clever way of printing ASCII
  characters, and their values
*/

#include <stdio.h>

void main(void)
{
char a_character;   /* for holding a character */

  printf("\n Enter an ASCII character : ");
  scanf("%c",&a_character);

  printf("\n The ASCII value of the character: %c ",a_character);
  printf("is: %d \n",a_character);
}
