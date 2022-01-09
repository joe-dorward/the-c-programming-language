/*
  Program menu_switch.c
  Written by: Joe Dorward
  Date: 10/02/01

  This program runs a menu using the switch selection construct
*/

#include <stdio.h>

void main(void)
{
  int selection = 0;
      
  do
  {
    printf("---------------------------------------------- \n");
    printf("       Welcome to Wells Fargo ATM \n\n");

    printf("             Menu Choices \n");
    printf("1: Check your balance. \n");
    printf("2: Check someone else's balance. \n");
    printf("3: Withdraw cash from your account. \n");
    printf("4: Withdraw cash from somone else's account. \n");

    printf("Selection: ");
    scanf("%d",&selection);

    switch(selection)
    {
      case 1: printf("\nYou asked to: Check your balance \n");
        break;

      case 2: printf("\nYou asked to: Check someone else's balance \n");
        break;

      case 3: printf("\nYou asked to: Withdraw cash from your account \n");
        break;

      case 4: printf("\nYou asked to: Withdraw cash from somone else's account \n");
        break;

      default: printf("\nSelection is out of range \n");
    }
  }while ( (selection > 0) && (selection < 5) );
}
