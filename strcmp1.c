/*
  Program "strcmp1.c"
  written by: Joe Dorward
  Date: 04/18/00

  This program demonstrates a call of the standard function strcmp();
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

  // the two strings are the same
  if ( strcmp(first_string,second_string) == 0 )
  {
    printf("\n ** First if. \n");
    printf("\n The strings: %s,",first_string);
    printf(" and: %s are the same. \n\n",second_string);
  }


  // first is first
  if ( strcmp(first_string,second_string) < 0 )
  {
    printf("\n ** Second if. \n");
    printf("\n The string: %s, comes",first_string);
    printf(" before the string: %s. \n\n",second_string);
  }


  // second is first
  if ( strcmp(first_string,second_string) > 0 )
  {
    printf("\n ** Third if. \n");
    printf("\n The string: %s, comes",second_string);
    printf(" before the string: %s. \n\n",first_string);
  }
}