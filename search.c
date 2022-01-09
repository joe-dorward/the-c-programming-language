/*
  Program search.c
  written by: Joe Dorward
  Date: 04/09/00

  This program has a 10 element array.

  It asks the user to enter a temperature, then says what day had that temperature.
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,
    search_temperature = 0,
    temperature_array[10] = {65, 64, 67, 68, 70, 75, 72, 64, 70};


  //====================================================================
  // get temperature to search for

  printf("Please enter the temperature to search for: ");
  scanf("%d",&search_temperature);

  //====================================================================
  // print values from the array

  for (element_number = 0; element_number < 10; element_number++)
  {
    if (temperature_array[element_number] == search_temperature)
    {
      printf("On day: %d ",element_number + 1);   // print day number

      printf("the temperature was: %d \n",temperature_array[element_number]);   // print temperature
    }
  }
  printf("\n\n");   // print two newlines
}
