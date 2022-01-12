/*
  Program "for1.c"
  Written by: Joe Dorward
  Date: 06/01/00

  Using a for() loop, this program writes out the value of the loop counter.
*/

#include <stdio.h>

void main(void)
{
int loop_counter = 0;

  for (loop_counter = 1; loop_counter <= 5; loop_counter++)
  {
    printf(" %d \n",loop_counter);
  } 

}
