/*
  Program convert2.c
  Written by: Joe Dorward
  Date: 05/17/00

  This program asks for a number of inches, and converts it to yards, feet, and inches
*/

#include <stdio.h>

void main(void)
{
int input_inches = 0,
    output_feet = 0,
    output_inches = 0;

  printf(" Please enter a number of inches: ");
  scanf("%d",&input_inches);

  printf("\n %d inches, converts to: \n",input_inches);

  output_feet = input_inches / 12;
  output_inches = input_inches % 12;

  printf("\t %d feet. \n",output_feet);
  printf("\t %d inches. \n\n",output_inches);
}
