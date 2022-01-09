/*
  Program math_functions.c
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates a call of the standard function sqrt()
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
double first_number = 0;

  // ask for a value
  printf("\n Please enter an real number: ");
  scanf("%lf",&first_number);   // scan in "as a" double -- (long float)
 
  // print out answer for square root
  printf("\n The square root of: %lf,",first_number);
  printf(" is: %lf", sqrt(first_number) );   // call the function in the printf()
}