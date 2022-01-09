/*
  Program "format2.c"
  Written by: Joe Dorward
  Date: 03/12/00

  This program demonstrates formatted output using
  field width specifiers
*/

#include <stdio.h>

void main(void)
{
  printf("\n Print the integers\n");

  printf("\n %4d ",31);
  printf("\n %4d ",4);
  printf("\n %4d ",321);
  printf("\n %4d \n",6);

  printf("\n Now the reals\n");

  printf("\n %7.2f ",78.30);
  printf("\n %7.2f ",4.99);
  printf("\n %7.2f ",126.49);
  printf("\n %7.2f \n",2200.59);

}
