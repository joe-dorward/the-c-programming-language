/*
  Program "password.c"
  Written by: Joe Dorward
  Date: 03/19/00

  This program demonstrates how to password protect a program.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
const char good_password[] = "jsd11";

char test_password[10];

  printf("\n \n ** TO USE THIS PROGRAM, PLEASE ENTER THE PASSWORD ** \n");
  printf("\n Password: ");
  gets(test_password);

  if (strcmp(test_password,good_password) == 0)
  {
    printf("\n Welcome to the Wells Fargo ATM server.");
    printf("\n You may now transfer other people's money ");
    printf("into your own account. \n");

    /* The rest of the program goes here */
  }
  else
  {
    printf("\n Access Denied"); 
    printf("\n I know who you are, and I'm calling the cops now.");
  }
}
