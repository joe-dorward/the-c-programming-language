/*
  Program "point3.c"
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
  printf("\n The value in the first number, is: %d \n",first_number);
  printf(" The value in the second number, is: %d \n\n",second_number);

  /* assign the address of first number to the pointer */
  pointer_to_integers = &first_number;

  /* print the memory addresses of the variables */
  printf("\n The memory address of the first number, is: ");
  printf("%d \n",&first_number);
  printf(" The memory address of the second number, is: ");
  printf("%d \n\n",&second_number);

  /* print out the value pointed to, and the address pointed to by the pointer */
  printf("\n The value pointed to, is: %d \n",*pointer_to_integers);
  printf(" The address pointed to, is: %d \n\n",pointer_to_integers);

  printf("\n The address of the pointer, is: %d \n",&pointer_to_integers);
  printf(" The size of the pointer, is: %d \n",sizeof(*pointer_to_integers));
}
