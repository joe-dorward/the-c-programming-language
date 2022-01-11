/*
  Program "odd_even1.c"
  written by: Joe Dorward
  Date: 04/20/00

  This program demonstrates decides if a number is odd or even
*/

#include <stdio.h>

void main(void)
{
int the_number = 0;

  printf("\n Please enter an number: ");
  scanf("%d",&the_number);  

  if (the_number % 2 == 0)
  {
    printf("\n The integer %d is even. \n",the_number);
  }
  else
  {
    printf("\n The integer %d is odd. \n",the_number);
  }
}
