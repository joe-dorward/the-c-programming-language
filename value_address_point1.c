/*
  Program "value_address_point1.c"
  written by: Joe Dorward
  Date: 05/03/00

  This program prints the value, and memory address of an integer variable
*/

#include <stdio.h>

void main(void)
{
int the_number = 3;


  // print the value of the variable
  printf("The value, is: %d \n",the_number);


  // print the memory addresse of the variable
  printf("The address, is: %d \n",&the_number);


  printf("\n");
}