/*
  Program temps1.c
  written by: Joe Dorward
  Date: 04/09/00

  This program has 7 integers, assigned into a 10 element array.

  It then uses a for() loop to run through the array, and
  print out those values.
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,
    daily_high_temperatures[10] = {65, 64, 67, 68, 70, 75, 72};

  //====================================================================
  // print out the values in the array

  for (element_number = 0; element_number < 7; element_number++)
  {
    printf("The high temperature for day: %d ",element_number + 1);
    printf("is: %d \n",daily_high_temperatures[element_number]);
  }
}
