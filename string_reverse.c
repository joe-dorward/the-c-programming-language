/*
  Program "string_reverse.c"
  Written by: Joe Dorward
  Date: 09/17/01

  This program simulates the string reverse function: strrev()
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
char a_string[50] = "";

  printf("Please enter a string: ");
  gets(a_string);

  printf("\n");
  printf("The string is: %s \n",a_string);
  printf("The string is now: %s \n",strrev(a_string) );
}
