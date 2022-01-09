/*
  Program "nonsense1.c"
  Written by: Joe Dorward
  Date: 05/17/00

  This program demonstrates what "non-sense" the C-language
  will allow to you do if you are not careful
*/

#include <stdio.h>

void main(void)
{
  printf("The result is: %d \n",'a' + 2);
  printf("The result is: %c \n",'a' + 2);
}