/*
  Program: string_pass.c
  Written by: Joe Dorward
  Date: 04/03/01

  This program demonstrates how to pass a string to a function.

  This program:
  * Asks for the name of a hometown
  * Passes it to a function
  * The function then prints a message
*/

#include <stdio.h>

void print_message(char [30]);  // function prototype

void main(void)
{
char hometown_name[30] = "";

  printf("Where are you from: ");
  gets(hometown_name);

  print_message(hometown_name);
}
//=====================================
void print_message(char input_string[30])
{
  printf("\n");
  printf("Are you really from ");
  printf("%s? \n",input_string);
  printf("Me too! \n\n");
}