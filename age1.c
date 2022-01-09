/*
  Program "age1.c"
  Written by: Joe Dorward
  Date: 05/24/00

  This program demonstrates the basic use of the if - else 
  statement.  It asks the user to enter a customer's age
*/

#include <stdio.h>

void main(void)
{
int customer_age = 0;

  printf("\n Please enter the customer's age: ");
  scanf("%d",&customer_age);

  if (customer_age < 21)   // Customer younger than 21 years
  {
    printf("\n Not OK - ");
    printf("The customer is too young to buy alcohol. \n");
  }
  else
  {
    printf("\n OK - ");
    printf("The customer may buy alchohol. \n");
  }
}
