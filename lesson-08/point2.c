/*
  Program "point2.c"
  written by: Joe Dorward
  Date: 05/03/00

  This program prints the value of two integer variables,
  and their address in memory
*/

#include <stdio.h>

void main(void)
{
int first_number = 3,
    second_number = 7,
    *pointer_to_integers;


  /* print the vaues of the variables */
  printf("\n The first value, is: %d \n",first_number);
  printf(" The second value, is: %d \n\n",second_number);

  /* assign the address of first number to the pointer */
  pointer_to_integers = &first_number;

  /* print the memory addresses of the variables */
  printf("\n The first address, is: %d \n",&first_number);
  printf(" The second address, is: %d \n\n",&second_number);

  /* print out the value pointed to by the pointer */
  printf("\n The value pointed to, is: %d \n",*pointer_to_integers);

  /* print out the address pointed to by the pointer */
  printf(" The address pointed to, is: %d \n\n",pointer_to_integers);
}
