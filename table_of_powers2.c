/*
  Program: table_of_powers2.c
  Written by: Joe Dorward
  Date: 09/28/01

  This program writes out a table of powers
*/

#include <stdio.h>

void main(void)
{
  float base_number = 0;  // loop counter

  printf("                        * * * Table Of Powers * * *               \n\n");

  printf("    2nd  3rd    4th     5th      6th        7th         8th          9th \n");

  for (base_number = 2; base_number < 22; base_number++)
  {
    printf("%2.0f. ",base_number);

    printf("%3.0f ",base_number*base_number);  // 2nd
    printf("%4.0f ",base_number*base_number*base_number);  // 3rd
    printf("%6.0f ",base_number*base_number*base_number*base_number);  // 4th
    printf("%7.0f ",base_number*base_number*base_number*base_number*base_number);  // 5th
    printf("%8.0f ",base_number*base_number*base_number*base_number*base_number*base_number);  // 6th
    printf("%10.0f ",base_number*base_number*base_number*base_number*base_number*base_number*base_number);  // 7th
    printf("%11.0f ",base_number*base_number*base_number*base_number*base_number*base_number*base_number*base_number);  // 8th  
    printf("%12.0f ",base_number*base_number*base_number*base_number*base_number*base_number*base_number*base_number*base_number);  // 9th
    printf("\n");
  }

  printf("\n");
}

