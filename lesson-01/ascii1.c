/*
  Program "ascii1.c
  Written by: Joe Dorward
  Date: 03/16/00

  This program asks the user to type in an ASCII character.
  It then prints the character's ASCII value to the screen.
*/

#include <stdio.h>

void main(void)
{
char the_character;

  printf(" Please enter the character: ");
  scanf("%c",&the_character);
  
  printf("\n The ASCII value of: %c, ",the_character);
  printf("is: %d \n",the_character);
}
