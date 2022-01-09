/*
  Program "testing.c"
  Written by: Joe Dorward
  Date: 05/26/00

  This program is for testing wierd student code
*/

#include <stdio.h>

void main(void)
{
  printf("The result is: %d \n",'a' + 2);
  printf("The result is: %c \n",'a' + 2);

  printf("%d \n",3+4);

  printf("%d yards\n",50 / 36);
  printf("%d feet\n",50 % 36 / 12);
  printf("%d inches\n",50 % 36 % 12);



  printf("\n\n");
}