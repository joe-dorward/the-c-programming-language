/*
  Program string_length.c
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates a call of the standard function strlen();
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
unsigned int string_length;

char the_string[25];

  printf("Please enter a string: ");
  gets(the_string);
  
  string_length = strlen(the_string);   /* function call */

  printf("\n The length of: %s,",the_string);

  printf(" is: %u characters. \n\n",string_length);
}