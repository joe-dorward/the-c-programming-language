/*
  Program "numbers3.c"
  Written by: Joe Dorward
  Date: 05/15/00

  This program asks the user for a number in English
  then prints out its integer value.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
char the_number[10] = "";

  do
  { 
    printf("\n Please enter a number in English: ");
    gets(the_number);

    if (strcmp(the_number,"zero") == 0)
    {
      printf(" 0 \n");
    }
   
    if (strcmp(the_number,"one") == 0)
    {
      printf(" 1 \n");
    }

    if (strcmp(the_number,"three") == 0)
    {
      printf(" 3 \n");
    }

  } while( strcmp(the_number,"quit") != 0);
  
    printf("\n\n");
}
