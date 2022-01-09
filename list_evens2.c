/*
  Program: list_evens2.c
  Written by: Joe Dorward
  Date: 10/09/01

  This program lists the 10 even numbers following an entered number
*/

#include <stdio.h>

void main(void)
{
  int loop_counter = 0,  // loop counter
      the_number = 0;

  printf("Please enter an integer: ");
  scanf("%d",&the_number);

  printf("The 10 even numbers following: %d are:\n\n",the_number);

  for (loop_counter = the_number; loop_counter < the_number + 20; loop_counter++)
  {
    if (loop_counter % 2 == 0)
    {
      printf("%d, ",loop_counter);
    }
  }

  if (the_number % 2 == 0)
  {
    printf("%d.\n\n",the_number + 20);
  }
  else
  {
    printf("%d.\n\n",the_number + 21);
  }
}

