/*
  Program: table_of_powers3.c
  Written by: Joe Dorward
  Date: 11/28/01

  This program writes out a table of powers using the pow() function
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
  float base_number = 0;  // loop counter

  printf("                        * * * Table Of Powers * * *               \n\n");

  printf("    2nd  3rd    4th     5th      6th        7th         8th          9th \n");

  for (base_number = 2; base_number < 22; base_number++)
  {
    printf("%2.0f. ",base_number);

    printf("%3.0f ", pow(base_number, 2) );  // 2nd
    printf("%4.0f ", pow(base_number, 3) );  // 3rd
    printf("%6.0f ", pow(base_number, 4) );  // 4th
    printf("%7.0f ", pow(base_number, 5) );  // 5th
    printf("%8.0f ", pow(base_number, 6) );  // 6th
    printf("%10.0f ", pow(base_number, 6) );  // 7th
    printf("%11.0f ", pow(base_number, 7) );  // 8th  
    printf("%12.0f ", pow(base_number, 9) );  // 9th
    printf("\n");
  }

  printf("\n");
}

