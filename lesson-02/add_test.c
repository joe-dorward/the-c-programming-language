/*
  Program "add_test.c"
  written by: Joe Dorward
  Date: 05/10/00

  This program asks the user for two numbers.
  It then asks the user what they add up to.
  It then checks the answer in an if() statement, and prints out a right/wrong message.
*/

#include <stdio.h>

void main(void)
{
int first_number,
    second_number,
    the_answer;

  // Ask for a number
  printf("\n Please enter an integer: ");
  scanf("%d",&first_number);

  // Ask for a number
  printf("\n Please enter an integer: ");
  scanf("%d",&second_number);

  // Ask the question
  printf("\n What does %d + %d = ",first_number,second_number);
  scanf("%d",&the_answer);

  // Test the answer, and choose a message
  if (first_number + second_number == the_answer)
  {
    printf("\n Hey, you got it right! \n");
  }
  else
  {
    printf("\n Boy did you get it wrong! \n");
  }
}
