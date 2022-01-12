/*
  Program "for7.c"
  Written by: Joe Dorward
  Date: 06/01/00

  This program does something interesting with characters and for() loops
*/

#include <stdio.h>

void main(void)
{
int loop_counter1 = 0,
    loop_counter2 = 0;

  printf("\n\n");

  printf(" %c",201);
  for (loop_counter1 = 1; loop_counter1 <= 13; loop_counter1++)
  {
    printf("%c",205);
  } 
  printf("%c \n",187);

  // ==============================================================

  for (loop_counter1 = 1; loop_counter1 <= 8; loop_counter1++)
  {
    printf(" %c",186);
    for (loop_counter2 = 1; loop_counter2 <= 13; loop_counter2++)
    {
      printf("%c",32);
    } 
    printf("%c \n",186);
  }

  // ==============================================================

  printf(" %c",200);
  for (loop_counter1 = 1; loop_counter1 <= 13; loop_counter1++)
  {
    printf("%c",205);
  } 
  printf("%c \n",188);

  // ==============================================================

  printf("\n\n");
}
