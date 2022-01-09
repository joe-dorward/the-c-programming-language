/*
  Program: multiple_choice.c
  written by: Joe Dorward
  Date: 10/23/01

  This program asks the user questions about the C programming language,
  and reports whether the answers were right/wrong.
*/

#include <stdio.h>

void main(void)
{
int first_answer = 0,
    second_answer = 0;

  // Ask first question
  printf("Which data-type do you use the format specifier: %%f with? \n\n");
  printf("The choices are: 1. int - 2. float - 3. char \n");
  printf("Enter your choice: ");
	scanf("%d",&first_answer);

	// check first answer
	if (first_answer == 2)
	{
		printf("\nHey, you got the first question RIGHT! \n");
	}
  else
  {
		printf("\nHey, you got the first question WRONG! \n");
	}

}