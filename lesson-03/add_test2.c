/*
  Program "add_test2.c"
  written by: Joe Dorward
  Date: 05/30/00

  This program asks the user for two numbers.
  It then asks the user what they add up to.
  It then checks the answer in an if() statement,
  and prints out a right/wrong message.

  It will ask repeatedly for an answer until a correct
  one is entered
*/

#include <stdio.h>

void main(void)
{
int first_number = 0,
    second_number = 0,
    the_answer = 0,
    flag = 0;   // flag for text condition
  
  // Ask for a number
  printf(" Please enter an integer: ");
  scanf("%d",&first_number);

  // Ask for a number
  printf(" Please enter an integer: ");
  scanf("%d",&second_number);

  do
  {
    // Ask the question
    printf(" +------------------------+");
    printf("\n What does %d + %d = ",first_number,second_number);
    scanf("%d",&the_answer);

    // Test the answer, and choose a message
    if (first_number + second_number == the_answer)
    {
      printf("\n Hey, you got it right! \n");
      flag = 1;
    }
    else
    {
      printf("\n Boy did you get it wrong! \n");
      printf(" Try again! \n");
    }

  } while(flag == 0);
}
