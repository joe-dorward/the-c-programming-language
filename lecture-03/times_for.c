/*
  Program "times_for.c"
  Written by: Joe Dorward
  Date: 03/19/00

  This program reads in an integer from the user, then writes out the multiplication-table for that integer.
 
  As a demonstration of the use of a for-loop, and field width specifiers.
*/

#include <stdio.h>

void main(void)
{
int times = 0,
    number_of_loops = 0;

  printf("\nThe Multiplication Table Program\n");

  printf("\nPlease enter an integer: ");
  scanf("%d",&times);

  for (number_of_loops = 1; number_of_loops <= 12; number_of_loops++)
  {
    printf("\n%d times %2d = ",times,number_of_loops);
    printf("%3d",times * number_of_loops);
  }

  printf("\n \n");
}
