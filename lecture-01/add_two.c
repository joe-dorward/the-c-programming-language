/*
  Program "add_two.c"

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
  scanf("%d",&first_number);

  printf("Please enter an integer: ");
  scanf("%d",&second_number);

  the_answer = first_number + second_number;

  printf("Adding %d and %d ",first_number,second_number);
  printf("results in: %d \n",the_answer);
}
