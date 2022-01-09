/*
  Program "pos_neg1.c"
  Written by: Joe Dorward
  Date: 03/18/00

  This program demonstrates the basic use of the if - else statement,
  by testing for a negative number.
*/

#include <stdio.h>

void main(void)
{
int the_number;

  printf("\n Please enter an integer: ");
  scanf("%d",&the_number);

  if (the_number < 0)   /* it's a negative number */
  {
    printf("\n Not OK - The number: %d is negative. \n",the_number);
  }
  else
  {
    printf("\n OK - The number: %d is positive. \n",the_number);
  }

}
