/*
  Program temps2.c
  written by: Joe Dorward
  Date: 04/09/00

  This program has 7 integers, assigned into a 10 element array.

  It then uses a for() loop to run through the array, and
  inspect each element.

  It will then print out the highest, and lowest temepratures in
  the array.
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,
    highest_temperature = -100,
    lowest_temperature = 200,
    daily_high_temperatures[10] = {65, 64, 67, 68, 70, 75, 72};

  //====================================================================
  // print out the values in the array

  for (element_number = 0; element_number < 7; element_number++)
  {

    // find highest-high temperature
    if (daily_high_temperatures[element_number] > highest_temperature)
    {
      highest_temperature = daily_high_temperatures[element_number];
    }

    // find lowest-high temperature
    if (daily_high_temperatures[element_number] < lowest_temperature)
    {
      lowest_temperature = daily_high_temperatures[element_number];
    }

  }
  printf("This weeks high temperatures, ranged from:");
  printf(" %d to:",lowest_temperature);
  printf(" %d \n\n",highest_temperature);
}
