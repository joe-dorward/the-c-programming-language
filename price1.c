/*
  Program "price1.c"
  Written by: Joe Dorward
  Date: 05/30/00

  This is a cash register program.
  It asks the user to enter the price of items od stock.

  It keeps track of the number of items, and total price.
  When a negative number for price is entered, the 
  program ends, and prints out the number of items
  and total price.
*/

#include <stdio.h>

void main(void)
{
int number_of_items = 0;

float item_price = 0,
      total_price = 0;


  printf("Enter item price: $ ");
  scanf("%f",&item_price);

  while (item_price > 0)
  {
    number_of_items++;   // increment number of items
    total_price = total_price + item_price;

    printf("Enter item price: $ ");
    scanf("%f",&item_price);
  } 

  printf("\n Total price is: $%4.2f \n",total_price);
  printf(" For: %d items.\n\n",number_of_items);
}
