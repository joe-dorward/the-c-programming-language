/*
  Program "total_do.c"
  Written by: Joe Dorward
  Date: 05/30/00

  Using a do - while() loop, his program asks the user for 5 numbers.
  The program totals these numbers, and calculates the average.
 */

#include <stdio.h>

void main(void)
{
int loop_counter = 1,
    the_number = 0,
    the_total = 0,
    the_average = 0;

  do
  {
    printf(" Please enter a number: ");
    scanf("%d",&the_number);

    the_total = the_total + the_number;
    loop_counter = loop_counter + 1;

  } while(loop_counter <= 5);   // notice semi-colon here

  the_average = the_total / 5;

  printf("\n The total is: %d \n",the_total);
  printf(" The average is: %d \n",the_average);
}
