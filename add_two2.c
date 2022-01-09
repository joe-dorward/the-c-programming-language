/*
  Program "add_two.c"
  Written by: Joe Dorward
  Date: 03/09/00

  This program asks the user for two integers.
  It adds them together, then prints the result to the screen.
*/

#include <stdio.h>

void main(void)
{
int first_number = 0,
    second_number = 0,
    the_answer = 0;

  printf("Please enter an integer: ");
  scanf("%d",first_number);

  printf("Please enter an integer: ");
  scanf("%d",&second_numer);

  the_answer = first_number + second_number

  printf("Adding %d and %d ",first_number,second_number);
  prinf("results in: %d \n",the_answer);
}
