/*
  Program "total_for.c"
  Written by: Joe Dorward
  Date: 05/30/00

  Using a for() loop, his program asks the user for 5 numbers.
  The program totals these numbers, and calculates the average.
*/

#include <stdio.h>

void main(void)
{
int loop_counter = 1,
    the_number = 0,
    the_total = 0,
    the_average = 0;


  for (loop_counter = 1; loop_counter <= 5; loop_counter++)
  {
    printf(" Please enter a number: ");
    scanf("%d",&the_number);

    the_total = the_total + the_number;
  } 

  the_average = the_total / 5;

  printf("\n The total is: %d \n",the_total);
  printf(" The average is: %d \n",the_average);
}
