/*
  Program "pin.c"
  Written by: Joe Dorward
  Date: 05/16/00

  This simulates an ATM asking for a PIN
*/

#include <stdio.h>

void main(void)
{
const int good_pin = 1234;

int entered_pin;

  printf("\n ** PIN REQUIRED TO ACCESS THIS MACHINE ** \n");

  printf("\n Please enter your PIN: ");
  scanf("%d",&entered_pin);

  if (entered_pin == good_pin)
  {
    printf("\n Welcome to the Wells Fargo ATM server.");
    printf("\n You may now transfer other people's money ");
    printf("into your own account. \n\n");
  }
  else
  {
    printf("\n ** ACCESS DENIED **");
    printf("\n I know who you are, and I'm calling the cops now. \n\n");
  }

}
