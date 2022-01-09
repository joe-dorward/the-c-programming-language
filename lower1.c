/*
  Program "lower1.c"
  Written by: Joe Dorward
  Date: 06/01/00

  Using a for() loop, this program prints out the first ten
  lowercase letters
*/

#include <stdio.h>

void main(void)
{
int loop_counter = 0;
   
  for (loop_counter = 97; loop_counter <= 107; loop_counter++)
  {
    printf(" %c \n",loop_counter);
  } 

}
