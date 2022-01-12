/*
  Program "intererst1.c"
  Written by: Joe Dorward
  Date: 09/23/00

  This program asks the user to enter a value for: deposit sum, term, APR,
  then it shows the value of the deposited sum at the end of each year.
*/

#include <stdio.h>

void main(void)
{
int deposit_term = 0,
    year_number = 0;   // used as loop counter

float deposited_sum = 0.0f,
      compounded_sum = 0.0f,
      annual_percentage_rate = 0.0f;      
  
  printf("Please enter the sum you want to deposit: ");
  scanf("%f",&deposited_sum);

  printf("Please enter the deposit term (years): ");
  scanf("%d",&deposit_term);

  printf("Please enter the Annual Percentage Rate (APR): ");
  scanf("%f",&annual_percentage_rate);

  compounded_sum = deposited_sum;

  printf("\n");

  for (year_number = 1; year_number <= deposit_term; year_number++)
  {
    compounded_sum = compounded_sum + (compounded_sum / 100 * annual_percentage_rate);

    printf("At the end of year: %d, ",year_number);
    printf("your investment will be worth: $%4.2f. \n",compounded_sum);
  }
  printf("\n");
}
