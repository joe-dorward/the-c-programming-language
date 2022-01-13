/*
  Program "strlen2.c"
  written by: Joe Dorward
  Date: 06/08/00

  This program simulates a call of the strlen() function
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
unsigned int loop_counter = 0;

char the_string[255] = "";

  printf(" Please enter a string: ");
  scanf("%s",the_string);
  
  while (the_string[loop_counter] != '\0')
  {
    loop_counter++;
  }

  printf("\n The string: %s,",the_string);
  printf(" contains: %u characters. \n",loop_counter);
}
