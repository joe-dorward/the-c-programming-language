/*
  Program counter1.c
  Written by: Joe Dorward
  Date: 08/18/00

  This program simulates the trip counter on a car
*/

#include <stdio.h>

void main(void)
{
int the_ones = 4,
    the_tens = 9,
    the_hundreds = 0,
    loop_counter;

char dummy;

  for (loop_counter = 1; loop_counter <= 10; loop_counter++)
  {
    printf("\t %d:%d:%d \t",the_hundreds,the_tens,the_ones);

    printf("Ready for next loop! ");
    scanf("%c",&dummy);

    if (the_ones < 9)
    {
      the_ones++;
    }
    else
    {
      the_ones = 0;

      if (the_tens < 9)
      {
        the_tens++;
      }
      else
      {
        the_tens = 0;
        the_hundreds++;
      }
    }
  } 
  printf("\nPress any key to continue");
  scanf("%c",&dummy);
}
