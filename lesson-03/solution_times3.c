/*
  Program "times3.c"
  Written by: Joe Dorward
  Date: 06/08/00

  This program copies the functionality of the program times2.c,
  but it uses a while() loop rather than a for() loop
*/

#include <stdio.h>

void main(void)
{
int times = 0,
    number_of_loops = 1;

  printf("\nThe Multiplication Table Program\n");

  printf("\nPlease enter an integer: ");
  scanf("%d",&times);

  while (number_of_loops < 13)
  {
    printf("\n%d times %2d = ",times,number_of_loops);
    printf("%3d",times * number_of_loops);

    number_of_loops++;
  }
  printf("\n");
}
