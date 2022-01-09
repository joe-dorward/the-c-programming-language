/*
  Program "strcpy1.c"
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates a call of the standard function strcpy();
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
char first_string[25] = "",
     second_string[25] = "";

  printf("Please enter the first string: ");
  scanf("%s",first_string);
  
  printf("Please enter the second string: ");
  scanf("%s",second_string);


  printf("\nThe first string is: %s. ",first_string);
  printf("\nThe second string is: %s. \n\n",second_string);


  strcpy(first_string,second_string);   // copy the second string in to the first string
  

  printf("\nThe first string is now: %s. ",first_string);
  printf("\nThe second string is still: %s. \n\n",second_string);
   
}