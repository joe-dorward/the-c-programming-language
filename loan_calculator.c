/*
  Program "loan_calculator.c"
  Written by: Joe Dorward
  Date: 09/23/00

  This program asks the user to enter a value for: loan sum, term, APR,
  then it shows how much interest will be paid over that term.
*/

#include <stdio.h>

void main(void)
{
int loan_term = 0,
    year_number = 0;   // used as loop counter

float loan_sum = 0.0f,
      compounded_sum = 0.0f,
      annual_percentage_rate = 0.0f;      
  
  printf("Please enter the sum you are borrowing: $");
  scanf("%f",&loan_sum);

  printf("Please enter the loan term (years): ");
  scanf("%d",&loan_term);

  printf("Please enter the Annual Percentage Rate (APR): ");
  scanf("%f",&annual_percentage_rate);

  compounded_sum = loan_sum;

  printf("\n");
  printf("==============================================\n");

  for (year_number = 1; year_number <= loan_term; year_number++)
  {
    compounded_sum = compounded_sum + (compounded_sum / 100 * annual_percentage_rate);
  }

    printf("The interest on: $%5.2f, \n",loan_sum);
    printf("At a rate of: %5.2f %, \n",annual_percentage_rate);
    printf("Over: %d years \n",loan_term);
    printf("Will be: %5.2f. \n",compounded_sum - loan_sum);
  
  printf("==============================================\n");
  printf("\n");
}
