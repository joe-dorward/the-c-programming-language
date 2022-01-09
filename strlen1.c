/*
  Program "strlen1.c"
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates calls of the standard function strlen();
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
unsigned int string_length = 0;   // strlen() returns an unsigned integer

char the_string[25] = "";

  printf("Please enter a string: ");
  gets(the_string);
  

  string_length = strlen(the_string);   /* function call */


  printf("\nThe string: \"%s\" \n",the_string);

  printf("Contains: %u characters. \n",string_length);

  printf("Or: %u characters. \n\n",strlen(the_string));
}