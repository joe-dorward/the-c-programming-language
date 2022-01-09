/*
  Program "for4.c"
  Written by: Joe Dorward
  Date: 06/01/00

  Using a for() loop, this program asks for a start and stop value
  then writes out the value, and character of the loop counter.
*/

#include <stdio.h>

void main(void)
{
int loop_counter = 0,
    start_value = 0,
    stop_value = 0;


  printf("Please enter start value: ");
  scanf("%d",&start_value);

  printf("Please enter stop value: ");
  scanf("%d",&stop_value);


  for (loop_counter = start_value; loop_counter <= stop_value; loop_counter++)
  {
    printf(" %3d = %c \n",loop_counter,loop_counter);
  } 

}
