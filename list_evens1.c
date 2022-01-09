/*
  Program: list_evens1.c
  Written by: Joe Dorward
  Date: 10/09/01

  This program lists the ten even numbers from 0
*/

#include <stdio.h>

void main(void)
{
  int the_number = 0;  // loop counter

  printf("The 10 even numbers from: %d \n\n",the_number);

  for (the_number = 0; the_number < 20; the_number++)
  {
    if (the_number % 2 == 0)
    {
      printf("%d, ",the_number);
    }
  }

  printf("%d.\n\n",the_number);
}

