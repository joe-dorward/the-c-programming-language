/*
  Program "nonsense2.c"
	Written by: Joe Dorward
	Date: 05/17/00

  This program demonstrates what "non-sense" the C-language
  will allow to you do if you are not careful
*/

#include <stdio.h>

void main(void)
{
int ascii_value = 0;

  printf(" Please enter an ASCII value (33 - 126): ");
  scanf("%d",&ascii_value);

  printf("\n The ASCII value is: %d \n",ascii_value);
  printf(" The character of that ASCII value is: ");
  printf("%c \n",ascii_value);

  printf("\n The next ASCII value is: ");
  printf("%d \n",ascii_value + ('b' - 'a'));
  printf(" The character of that next ASCII value is: ");
  printf("%c \n\n",ascii_value + ('b' - 'a'));
}