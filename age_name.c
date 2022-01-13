/*
  Program "age_name.c"
  Written by: Joe Dorward
  Date: 05/24/00

  This program will ask the user for their age, and name,
  then print them out.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int your_age = 0;

char catch_return = ' ',
     your_name[25] = "";

  printf("\n Please enter your age: ");
  scanf("%d",&your_age);

  catch_return = getchar();
  printf(" Please enter your name: ");
  gets(your_name);

  printf(" %s, you are %d years old. \n",your_name,your_age);
}
