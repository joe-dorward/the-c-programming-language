
/*
  Program temps1.c
  written by: Joe Dorward
  Date: 04/09/00

  This program reads 7 integers, as day time high temeratures for
  a week, into a 10 element array.

  Then it searches for the highest temperature for the week.
  It also averages the day time high temperatures for the week.
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,
    highest_temperature = -100,
	lowest_temperature = 100,
    temperature_array[10] = {65, 64, 67, 68, 70, 75, 72};

  /* ==================================================================== */
  /* Find the highest and lowest temperatures */

  for (element_number = 0; element_number < 7; element_number++)
  {
    if (temperature_array[element_number] > highest_temperature)
    {
      highest_temperature = temperature_array[element_number];
    }

	if (temperature_array[element_number] < lowest_temperature)
	{
	  lowest_temperature = temperature_array[element_number];
    }
  }

  /* ==================================================================== */
  /* Print out the highest temperature */

  printf("This weeks\'s high temperatures, ranged from: ");
  printf("%d to: %d \n\n",lowest_temperature,highest_temperature);

 
}
