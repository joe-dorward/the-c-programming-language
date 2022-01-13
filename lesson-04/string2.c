/*
  Program "string2.c"
  Written by: Joe Dorward
  Date: 03/09/00

  This program uses a while loop to write out the characters 
  of a string to the screen.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int pause = 0;   // used for pausing while() loop

unsigned int string_element = 0;

char the_string[50] = "";

  printf("Input string:\n");

  printf("\t Please type a lowercase string: ");
  gets(the_string);

  printf("\nOutput string:\n");
  printf("\t ");

  while (string_element < strlen(the_string))
  {
    printf("%c",the_string[string_element]);   // print current character
    string_element++;

    for (pause = 1; pause < 20000000; pause++);   // count to twenty million
  }
  printf("\n\n");
}
