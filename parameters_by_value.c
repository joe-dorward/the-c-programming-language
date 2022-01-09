/*
  Program: parameters_by_value.c
  Written by: Joe Dorward
  Date: 10/07/07

  This program demonstrates calling a function with a "by value" parameter.
*/
#include <stdio.h>

void plus_one(int);

void main(void)
{
  int entered_number = 0;

  printf("Enter a number: ");
  scanf("%d",&entered_number);

  printf("\nThe number is: %d \n",entered_number);

  plus_one(entered_number);  // function call

  printf("The number is: %d \n",entered_number);

  printf("\n");
}
//=====================================
void plus_one(int the_number)
{
  the_number++;

  printf("The number is: %d <-- Inside function\n",the_number);
}