/*
  Program in_and_out.c
  written by: Joe Dorward
  Date: 04/09/00

  This program has a 10 element array.

  It asks for 5 integers, and puts them in the array.
  Then prints the values from the array..
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,
    temperature_array[10];   // no assignments

  //====================================================================
  // get values for the array

  for (element_number = 0; element_number < 5; element_number++)
  {
    printf("Please enter an integer: ");   // ask for value

    scanf("%d",&temperature_array[element_number]);   // put value in array
  }

  printf("\n\n");   // print two newlines

  //====================================================================
  // print values from the array

  for (element_number = 0; element_number < 5; element_number++)
  {
	  printf("Element: %d of the array ",element_number);   // print element number

    printf("contains: %d \n",temperature_array[element_number]);   // print data in array
  }
  printf("\n\n");   // print two newlines
}
