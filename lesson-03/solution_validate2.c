/*
  Program "validate2.c"
  written by: Joe Dorward
  Date: 05/30/00

  This program asks for a value for a month (1-12).
	
  It will ask repeatedly for a value until a valid
  one is entered
*/

#include <stdio.h>

void main(void)
{
int the_month = 0,
    flag = 0;   // flag for text condition

  do
  {
    // Ask for a number
    printf(" Please the month: ");
    scanf("%d",&the_month);

    // test the entered month value, and choose a message
    if ( (the_month >= 1) && (the_month <= 12) )
    {
      printf("\n OK -- Good value. \n");
      flag = 1;
    }
    else
    {
      printf("\n Not OK -- Bad value \n");
    }

  } while(flag == 0);
}
