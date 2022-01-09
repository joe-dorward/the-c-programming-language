/*
  Program "strlen.c"
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates a call of the standard function strlen();
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
unsigned int string_length = 0;   // strlen() returns an unsigned integer

char the_string[25] = "";

  printf(" Please enter a string: ");
  scanf("%s",the_string);
  
  string_length = strlen(the_string);   /* function call */

  printf("\n The string: %s,",the_string);
  printf(" contains: %d characters. \n",string_length);
}