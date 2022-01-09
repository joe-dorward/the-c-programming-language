/*
  Program: even_function_integer.c
  written by: Joe Dorward
  Date: 04/20/00

  This program demonstrates writing, and calling a function that 
  decides if a number is odd or even.
*/

#include <stdio.h>

int is_it_even1(int);   /* function prototype */

void main(void)
{
int number_one = 0;

  printf("\n Please enter an number: ");
  scanf("%d",&number_one);
  

  if (is_it_even1(number_one) == 1)   /* function call checking return value*/
  {
    printf("\n The integer %d is even. \n\n",number_one);
  }
  else
  {
    printf("\n The integer %d is odd. \n\n",number_one);
  }
}
/* ====================================================================== */
int is_it_even1(int the_number)   /* function definition */
{
  if (the_number % 2 == 0)   /* its an even number */
  { 
    return(1);
  }
  else
  {
    return(0);
  }
}
/* ====================================================================== */
