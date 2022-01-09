/*
  Program "numbers1.c"
  Written by: Joe Dorward
  Date: 05/15/00

  This program asks the user for a whole-number in the range 0 - 9,
  then prints out the number in English.
*/

#include <stdio.h>

void main(void)
{
int the_number;

  printf("\n Please enter a whole-number (0 - 9): ");
  scanf("%d",&the_number);

 
  if (the_number == 0)
	{
    printf("\n Zero. \n");
	}
  else if (the_number == 1)
	{
    printf("\n One. \n");
	}
  else if (the_number == 2)
	{
    printf("\n Two. \n");
	}
}
