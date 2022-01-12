/*
  Program "menu1.c"
  Written by: Joe Dorward
  Date: 05/15/00

  This program demonstrates a menu
*/

#include <stdio.h>

void main(void)
{
int menu_choice = 0;

  printf(" Welcome to Wells Fargo ATM \n\n");

  printf(" Menu Choices \n");
  printf(" 1: Check your balance. \n");
  printf(" 2: Withdraw cash. \n");
  printf(" 3: Transfer cash to another account. \n");
  printf(" ");

  scanf("%d",&menu_choice);
 
  if (menu_choice == 1)
  {
    printf("\n You want to check your balance. \n\n");
  }
  else if (menu_choice == 2)
  {
    printf("\n You want to withdraw cash. \n\n");
  }
  else if (menu_choice == 3)
  {
    printf("\n You want to transfer cash. \n\n");
  }
}
