/*
  Program "highest2.c"
  written by: Joe Dorward
  Date: 04/09/00

  This program asks for 7 day time high temeratures for a week,
  and prints out the highest temperature for the week.
*/

#include <stdio.h>

void main(void)
{
int highest_temperature = 0,
    highest_high_temperature = -100,
    loop_counter = 0;

  // ====================================================================

  for (loop_counter = 1; loop_counter <= 7; loop_counter++)
  {
    printf(" Please enter the high temperature: ");
    scanf("%d",&highest_temperature);

    if (highest_temperature > highest_high_temperature)
    {
      highest_high_temperature = highest_temperature;
    }
  }

  // ====================================================================

  printf("\n This weeks highest temperature, was: ");
  printf("%d \n\n",highest_high_temperature);
}
