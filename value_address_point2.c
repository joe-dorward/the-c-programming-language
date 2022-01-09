/*
  Program "value_address_point2.c"
  written by: Joe Dorward
  Date: 05/03/00

  This program prints the value of two integer variables,
  and their address in memory
*/

#include <stdio.h>

void main(void)
{
int the_number = 3,
    *pointer_to_integers;


  // assign the address of the variable to the pointer
  pointer_to_integers = &the_number;

  // -------------------------------------------------------------------------

  // print the value of the variable
  printf("\n The value, is: %d \n",the_number);

  // print the memory addresse of the variable
  printf("\n The address, is: %d \n",&the_number);

  // -------------------------------------------------------------------------

  // print out the value pointed to by the pointer
  printf("\n The value pointed to, is: %d \n",*pointer_to_integers);

  // print out the address pointed to by the pointer
  printf(" The address pointed to, is: %d \n\n",pointer_to_integers);
}