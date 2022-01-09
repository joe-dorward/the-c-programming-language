/*
  Program "gas.c"

  This program asks the user how many gallons of gasoline they want.
	It then calculates the total price, and to the screen.
*/

#include <stdio.h>

void main(void)
{
const float price_per_gallon = 1.59f;   // must add the 'f' when initializing

float number_of_gallons,
      total_price;

  printf("How many gallons do you want: ");
  scanf("%f",&number_of_gallons);

  total_price = number_of_gallons * price_per_gallon;

  printf("%4.2f gallons of gasoline ",number_of_gallons);
  printf("will cost: $ %4.2f \n",total_price);
}
