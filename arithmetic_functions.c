/*
  Program arithmetic_functions.c
  Written by: Joe Dorward
  Date: 04/20/00

  This program demonstrates writing, and calling a function that adds two integers together
*/

#include <stdio.h>

int add_two(int,int);   /* function prototype */

void main(void)
{
int number_one = 0,
    number_two = 0,
    the_answer = 0;

  // ask for a number
  printf("Please enter a number: ");
  scanf("%d",&number_one);
  
  // ask for another number
  printf("Please enter a number: ");
  scanf("%d",&number_two);

  // print out answer for add_two() in printf()
  printf("\nAdding %d and %d",number_one,number_two);
  printf(" = %d \n\n", add_two(number_one,number_two) );

}
/* ====================================================================== */
int add_two(int first,int second)   /* function definition */
{
	return(first + second);
}
/* ====================================================================== */