/*
  Program "point1.c"
  written by: Joe Dorward
  Date: 05/03/00

  This program prints the value of two integer variables,
	and their address in memory
*/

#include <stdio.h>

void main(void)
{
int first_number = 3,
    second_number = 7;


  /* print the vaues of the variables */
  printf("\n The first value, is: %d \n",first_number);
	printf(" The second value, is: %d \n\n",second_number);


	/* print the memeory addresses of the variables */
  printf("\n The first address, is: %d \n",&first_number);
	printf(" The second address, is: %d \n\n",&second_number);
}