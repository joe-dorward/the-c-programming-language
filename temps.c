
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
int element_number,
    highest_temperature = 0,
    total_of_temperatures = 0,
    daily_high_temperatures[10];

  /* ==================================================================== */
  /* Read the 7 temperatures into the array */

  printf("\n");

  for (element_number = 0; element_number < 7; element_number++)
  {
    printf(" Please enter the days highest temperature: ");
    scanf("%d",&daily_high_temperatures[element_number]);
  }

  /* ==================================================================== */
  /* Find the highest temperature */

  for (element_number = 0; element_number < 7; element_number++)
  {
    if (daily_high_temperatures[element_number] > highest_temperature)
    {
      highest_temperature = daily_high_temperatures[element_number];
    }
  }

  /* ==================================================================== */
  /* Print out the highest temperature */

  printf("\n This weeks highest temperature, was: ");
  printf("%d",highest_temperature);

  /* ==================================================================== */
  /* Add all the temperatures together */

  for (element_number = 0; element_number < 7; element_number++)
  {
    total_of_temperatures = total_of_temperatures + daily_high_temperatures[element_number];
  }

  /* ==================================================================== */
  /* Print out the average temperature */

  printf("\n The average temperature for the week was: ");
  printf("%d",total_of_temperatures / 7);
}
