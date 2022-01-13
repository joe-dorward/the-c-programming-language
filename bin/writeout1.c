/*
  Program "writeout1.c"
  Written by: Joe Dorward
  Date: 03/09/00

  This program uses a while loop controlled by the strlen() function to write out the 
  characters of a string to the screen one at a time
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int pause = 0;   // used for pausing while() loop

unsigned int current_string_element = 0;   // the current string element starts at zero

char the_string[50] = "";

  printf("\t Please enter string: \n\n");

  printf("Input string: ");
  gets(the_string);

  // -------------------------------------------------------

  printf("\nOutput string: ");

  while ( current_string_element < strlen(the_string) )
  //while ( the_string[current_string_element] != '\0' )
  {
    printf("%c",the_string[current_string_element]);   // print current character
    current_string_element++;

    for (pause = 1; pause < 20000000; pause++);   // count to twenty million
  }
  printf("\n\n");
}
