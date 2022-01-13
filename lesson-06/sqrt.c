/*
  Program sqrt.c
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates a call of the standard function sqrt()
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
double the_number,
       the_answer;

  printf("\n Please enter an real number: ");
  scanf("%lf",&the_number);
  
  the_answer = sqrt(the_number);   /* function call */

  printf("\n The square root of: %lf,",the_number);
  printf(" is: %lf",the_answer);
}
