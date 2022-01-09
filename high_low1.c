/*
  Program "high_low1.c"
  Written by: Joe Dorward
  Date: 05/10/00

  This program reads in two integers
	It compares their value, and prints them to the screen
	in order, the lowest first
*/

#include <stdio.h>

void main(void)
{
int first_number,
    second_number;


  // Ask for a number
  printf("\nPlease enter an integer: ");
  scanf("%d",&first_number);

  // Ask for a number
  printf("\nPlease enter an integer: ");
  scanf("%d",&second_number);

  // Test the numbers, and choose the message
  if (first_number < second_number)
	{
    printf("\n The first number: %d is lower than",first_number);
		printf(" the second number %d \n",second_number);
	}
	else 
  {
		printf("\n The second number: %d is lower than",second_number);
		printf(" the first number %d \n",first_number);
	}
}
