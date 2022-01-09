/*
  Program "array1.c"
  Written by: Joe Dorward
  Date: 04/12/00

  This program declares an array of integers. 
  The loop counter of a for() loop is used to assign values to 
  the elements of the array.
  Another for() loop prints the values of the elements to the 
  screen.
*/

#include <stdio.h>

void main(void)
{
int loop_counter,
    integer_array[25];

  /* assign value of loop counter into the array */

  for (loop_counter = 0; loop_counter < 25; loop_counter++)
  {
    integer_array[loop_counter] = loop_counter;
  }

  /* print the values of the array to the screen */

  for (loop_counter = 0; loop_counter < 25; loop_counter++)
  {
    printf("\n The value in element: %2d,",loop_counter);
    printf(" is: %d.",integer_array[loop_counter]);
  }
}
