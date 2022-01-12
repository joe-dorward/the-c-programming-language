/*
  Program arithmetic_point1.c
  Written by: Joe Dorward
  Date: 04/19/01

  This program passes the addresses of some variables into a function
  to get it to produce more than one result
*/

#include <stdio.h>

void arithmetic(int *, int *, int *);   // function prototype

void main(void)
{
int first_number = 0,
    second_number = 0,
    added = 0;

  printf("Please enter the first number: ");
  scanf("%d",&first_number);

  printf("Please enter the second number: ");
  scanf("%d",&second_number);

  arithmetic(&first_number,&second_number,&added);   // call the function

  // print results ===========================================================
  printf("\n"); 
  
  printf("%d + %d = %d \n",first_number,second_number,added);   // addition

  printf("\n"); 
}
/* ====================================================================== */
void arithmetic(int *first, int *second, int *add)   /* function definition */
{
  *add = *first + *second;   // do addition
}
