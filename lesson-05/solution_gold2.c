/*
  Program gold2.c
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

float london_gold_closing[35] =

                   {288.34f, 289.40f, 292.90f, 289.90f, 288.50f, 0.0f, 0.0f,
                    288.80f, 289.70f, 291.20f, 291.20f, 290.50f, 0.0f, 0.0f,
                    290.25f, 290.65f, 288.75f, 289.15f, 288.50f, 0.0f, 0.0f }; 

  // ====================================================================
  // print non-zero closing prices

  for (element_number = 0 ; element_number <= 20 ; element_number++)
  {
    if (london_gold_closing[element_number] > 0)
    {
      printf(" Closing Gold for March %2d, ",element_number + 1);
      printf(" was: $%0.2f \n",london_gold_closing[element_number]);
    }
    else
    {
      printf(" \n");
    }
  }

}
