/*
  Program multiply_for.c
  Written by: Joe Dorward
  Date: 08/26/01

  This program does multiplication by addition
*/

#include <stdio.h>

void main(void)
{
  int loop_counter = 0,
      the_answer = 0,
      first_number = 0,
      second_number = 0;

  char dummy;

  printf("Please enter a number: ");
  scanf("%d",&first_number);

  printf("Please enter a number: ");
  scanf("%d",&second_number);

  for (loop_counter = 1; loop_counter <= second_number; loop_counter++)
  {
    the_answer = the_answer + first_number;
  } 

  printf("%d",the_answer);

  printf("\nPress any key to continue");
  scanf("%c",&dummy);
}
