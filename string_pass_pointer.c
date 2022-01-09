/*
  Program: string_pass_pointer.c
  Written by: Joe Dorward
  Date: 10/29/01

  This program:
  * Demonstrates how to give a function access to a character array by passing it
    a character pointer
  * It then writes out the string using pointer arithmetic
*/

#include <stdio.h>

void write_string(const char *);  // function prototype

void main(void)
{
  char input_string[50] = "";

  printf("Please enter a string: ");
  gets(input_string);

  printf("\n");
  write_string(input_string);
  printf("\n");
}
//=============================================================================
void write_string(const char *character_pointer)
{
  int pause = 0;  // loop counter

  while (*character_pointer != '\0')  // while the value pointed to isn't NULL
  {
    printf("%c",*character_pointer);  // print current character

    character_pointer++;

    for (pause = 1; pause < 20000000; pause++);  // count to twenty million
  }
}


