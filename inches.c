/*
	Program "inches.c"
	Written by: Joe Dorward
	Date: 05/17/00

	This program asks for a number of inches, and converts
	it to yards, feet, and inches
*/

#include <stdio.h>

void main(void)
{
int the_inches,
    number_of_yards,
	number_of_feet;


  printf("\n Please enter a number of inches: ");
  scanf("%d",&the_inches);

  printf("\n %d inches, converts to: \n",the_inches);

  number_of_yards = the_inches / 36;

  the_inches = the_inches - number_of_yards * 36;

  number_of_feet = the_inches / 12;

  the_inches = the_inches - number_of_feet * 12;

  printf("\t %d yards. \n",number_of_yards);
  printf("\t %d feet. \n",number_of_feet);
  printf("\t %d inches. \n",the_inches);
}
