/*
  Program cust1.c
  written by: Joe Dorward
  Date: 04/09/00

  This program reads characters for a customer name into
  a character array, then writes them out to the screen.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
char a_character,
     customer_name[15] = "";

int element_number = 0;

  printf("\n Please enter the customer\'s name: ");

  a_character = getchar();   /* read in the first character */

  while (a_character != '\n')
  {
    customer_name[element_number] = a_character;
    a_character = getchar();
    element_number++;
  }

  element_number = 0;   /* reset value to zero */

  printf("\n The customer\'s name is: ");

  while (element_number < strlen(customer_name))
  {
    printf("%c",customer_name[element_number]);
    element_number++;
  }
}
