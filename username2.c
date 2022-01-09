/*
  Program "username2.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of character strings with the gets() function
*/

#include <stdio.h>   /* list header files */

void main(void)
{
char username[25] = "";   // variable intialized empty


  printf("Enter your username: ");
  gets(username);

  printf("Welcome: %s \n\n",username);
}
