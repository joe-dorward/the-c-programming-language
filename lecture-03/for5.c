/*
  Program "for5.c"
  Written by: Joe Dorward
  Date: 06/01/00

  This program does something interesting with characters and a for() loop
*/

#include <stdio.h>

void main(void)
{
int loop_counter = 0;

  printf("\n\n");
  
  printf(" %c",201);  
  for (loop_counter = 1; loop_counter <= 13; loop_counter++)
  {
    printf("%c",205);
  }
  printf("%c \n",187);

  printf("\n\n");
}
