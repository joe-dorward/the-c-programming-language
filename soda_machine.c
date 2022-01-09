/*
  Program soda_machine.c
  Written by: Joe Dorward
  Date: 07/15/00

  This program simulates a machine asking for 75 cents for a can of soda
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
const int price_of_soda = 75;

int amount_to_pay = price_of_soda,
    amount_entered = 0;
      

  printf("%d cents please: ",price_of_soda);
  scanf("%d",&amount_entered);

  amount_to_pay = amount_to_pay - amount_entered;

  if (amount_to_pay < 0)
  {
    printf("%d cents received, ",amount_entered);
    printf("%d cents issued as change. \n",abs(amount_to_pay));
  }

  while (amount_to_pay > 0)
  {
    printf("%d cents please: ",amount_to_pay);
    scanf("%d",&amount_entered);

    amount_to_pay = amount_to_pay - amount_entered;
  }
  printf("\n ** Thank You ** \n");
}
