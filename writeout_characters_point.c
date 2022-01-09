/*
  Program "writeout_characters_point.c"
  Written by: Joe Dorward
  Date: 09/12/01

  This program writes out each character in a string (one at a time)
  using a pointer
*/

#include <stdio.h>

void main(void)
{
  int current_element = 0,  // loop counter
      pause = 0;  // used for pausing while() loop
       
  char  the_string[50] = "This is a string.",
        *pointer_to_characters = &the_string[0];  // initialize pointer


  // -------------------------------------------------------
  // write out string

  while ( the_string[current_element] != '\0' )
  {
    printf("%c",*pointer_to_characters);   // print current character
    pointer_to_characters++;

    for (pause = 1; pause < 20000000; pause++);   // count to twenty million
    current_element++;
  }
  printf("\n\n");
}
