/*
  Program print_out.c
  written by: Joe Dorward
  Date: 04/09/00

  This program has 7 integers, assigned into a 10 element array.

  It then uses a for() loop to run through the array, and print out those values.
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,
    temperature_array[10] = {65, 64, 67, 68, 70, 75, 72};

  //====================================================================
  // print out the values in the array

  for (element_number = 0; element_number < 10; element_number++)
  {
    printf("Temperature: %d ",element_number);   // print the element number

    printf("is: %d \n",temperature_array[element_number]);   // print data in element
  }
  printf("\n\n");
}
