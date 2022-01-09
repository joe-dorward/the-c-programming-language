/*
  Program string.c
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates a call of the standard function strlen();
*/

#include <stdio.h>

void main(void)
{
int string_length;

char the_string[25];

  printf("\n Please enter a string: ");
  scanf("%s",the_string);
  
  string_length = strlen(the_string);   /* function call */

  printf("\n The length of: %s,",the_string);
  printf(" is: %d characters.",string_length);
}