/*
  Program gold1.c
  written by: Joe Dorward
  Date: 04/09/00

  This program assigns values into an array for the daily price
  of gold in London.

  Then it asks for a price from the user, and it tells the user
  how many days the price of gold closed in London higher than that.
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,   /* loop counter */
    day_counter = 0;   /* counts the number of days */

float entered_price,
      london_gold_closing[35] =

                   {288.34f, 289.40f, 292.90f, 289.90f, 288.50f, 0.0f, 0.0f,
                    288.80f, 289.70f, 291.20f, 291.20f, 290.50f, 0.0f, 0.0f,
                    290.25f, 290.65f, 288.75f, 289.15f, 288.50f, 0.0f, 0.0f }; 

  // ====================================================================
  // Ask for a price, and report

  printf(" Please enter the bottom price: ");
  scanf("%f",&entered_price);

  for (element_number = 0 ; element_number <= 20 ; element_number++)
  {
    if (london_gold_closing[element_number] > entered_price)
    {
      day_counter++;
    }
  }

  printf("\n London gold closed above: $%3.2f,",entered_price);
  printf(" %d days this month. \n\n",day_counter);
}
