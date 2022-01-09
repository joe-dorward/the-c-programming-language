/*
  Program: my_string_length.c
  Written by: Joe Dorward
  Date: 04/03/01

  This program 
  * Passes a string to a function that simulates the string length function
*/

#include <stdio.h>

int my_strlen(char [50]);  // function prototype

void main(void)
{
char a_string[50] = "";

  printf("Please enter a string: ");
  gets(a_string);

  printf("\n");
  printf("The string: %s \n",a_string);
  printf("Has: %d characters. \n\n", my_strlen(a_string) );
}
//=====================================
int my_strlen(char input_string[50])
{
  int element_number = 0;

  while(input_string[element_number] != '\0')
  {
    element_number++;
  }
  return(element_number);
}