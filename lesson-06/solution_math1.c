/*
  Program math1.c
  written by: Joe Dorward
  Date: 06/25/00

  This program demonstrates calls of standard math functions
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
double the_number;

  printf(" Please enter an real number: ");
  scanf("%lf",&the_number); 

  printf("\n The square root of: %0.4lf,",the_number);
  printf(" is: %0.4lf \n",sqrt(the_number));

  printf(" The sine  of: %0.4lf,",the_number);
  printf(" is: %0.4lf \n",sin(the_number));

  printf(" The cosine of: %0.4lf,",the_number);
  printf(" is: %0.4lf \n",cos(the_number));

  printf(" The tangent of: %0.4lf,",the_number);
  printf(" is: %0.4lf \n",tan(the_number));

  printf(" %0.4lf, to the fourth power",the_number);
  printf(" is: %0.4lf \n\n",pow(the_number,4));
}
