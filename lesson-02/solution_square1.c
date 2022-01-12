/*
  Program "square1.c"
  Written by: Joe Dorward
  Date: 05/15/00

  This program asks the user for a real number then
  calculates the square of that number
*/

#include <stdio.h>

void main(void)
{
float the_number = 0,
      the_square = 0;

  printf("\n Please enter a real: ");
  scanf("%f",&the_number);

  the_square = the_number * the_number;
  
  printf("The square of: %2.2f is: %2.2f \n\n",the_number,the_square);
}
