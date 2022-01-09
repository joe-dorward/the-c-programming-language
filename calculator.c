/*
  Program calculator.c
  Written by: Joe Dorward
  Date: 07/18/00

  This program asks for two numbers and a sign, then performs
  that calculation
*/

#include <stdio.h>

void main(void)
{
float first_number = 0.0f,
      second_number = 0.0f;

char the_sign = ' ';

  printf(" Please enter the sign: ");
  scanf("%c",&the_sign);

  printf(" Please enter a number: ");
  scanf("%f",&first_number);

  printf(" Please enter a number: ");
  scanf("%f",&second_number);

  if (the_sign == '+')
  {
    printf("\n %0.2f + %0.2f ",first_number,second_number);
    printf("= %0.2f \n\n",first_number + second_number); 
  }

}
