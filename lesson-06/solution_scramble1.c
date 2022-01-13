/*
  Program "scramble1.c"
  written by: Joe Dorward
  Date: 06/08/00

  This program scrambles a string by adding an integer value to each
  letter in the string
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int loop_counter = 0,
     the_key = 0;

char the_string[255] = "";

  printf(" Please enter a string of letters: ");
  gets(the_string);

  printf(" Please enter the key value: ");
  scanf("%d",&the_key);
  
  while (the_string[loop_counter] != '\0')
  {
    the_string[loop_counter] += the_key;
    loop_counter++;
  }

  printf("\n The scrambled string is: %s \n\n",the_string);

}
