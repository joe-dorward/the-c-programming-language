/*
  Program "writeout_pointers.c"
  Written by: Joe Dorward
  Date: 09/12/01

  This program writes out each character in a string (one at a time)
  using a pointer
*/

#include <stdio.h>

void main(void)
{
  short array[20];
 short    *p = &array[0];

  int current_element = 0,  // loop counter
      temperature_array[50] = {40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95},
      *pointer_to_integers = &temperature_array[0],
      pause = 0;  // used for pausing while() loop

  // -------------------------------------------------------
  // write out array

  while ( temperature_array[current_element] != 0 )
  {
    printf("%d ",*pointer_to_integers);   // print current character
    pointer_to_integers++;

    for (pause = 1; pause < 20000000; pause++);   // count to twenty million
    current_element++;
  }
  printf("\n\n");
}
