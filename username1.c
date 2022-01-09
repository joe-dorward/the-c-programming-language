/*
  Program "username1.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of character strings with the scanf() function
*/

#include <stdio.h>   /* list header files */

void main(void)
{
char username[25] = "";   // variable intialized empty


  printf("Enter your username: ");
  scanf("%s",username);

  printf("Welcome: %s \n\n",username);
}
