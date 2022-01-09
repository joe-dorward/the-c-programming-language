/*
  Program "ascii2.c"
  Written by: Joe Dorward
  Date: 03/19/00

  This program demonstrates the use of a for() loop,
  by writing the lowercase letters in a list
*/

#include <stdio.h>

void main(void)
{
int ascii_value;

  for (ascii_value = 97; ascii_value < (97 + 26); ascii_value++)
  {
    printf(" %d = %c \n",ascii_value,ascii_value);
  }
}
