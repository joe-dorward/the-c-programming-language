/*
  Program "ascii4.c"
  Written by: Joe Dorward
  Date: 03/19/00

  This program demonstrates the use of a for loop, by writing the ASCII table
*/

#include <stdio.h>

void main(void)
{
int ascii_value;

  for (ascii_value = 32; ascii_value < 127; ascii_value += 5)
  {
    printf("\n %3d = %c ",ascii_value,ascii_value);
    printf("\t %3d = %c ",ascii_value+1,ascii_value+1);
    printf("\t %3d = %c ",ascii_value+2,ascii_value+2);
    printf("\t %3d = %c ",ascii_value+3,ascii_value+3);
    printf("\t %3d = %c ",ascii_value+4,ascii_value+4);
  }
  printf("\n\n");
}
