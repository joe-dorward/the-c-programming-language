/*
  Program "counter_for.c"
  Written by: Joe Dorward
  Date: 03/19/00

  This program writes out the value of a loop counter
*/

#include <stdio.h>

void main(void)
{
int loop_counter = 0;
  
  for (loop_counter = 0; loop_counter <= 9; loop_counter++)
  {
    printf("The value of the loop counter is: %d \n",loop_counter);
  }

  printf("\n \n");
}
