/*
  Program fun1.c
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

  printf("\n Please enter an number: ");
  scanf("%d",&number_one);
  
  printf("\n Please enter an number: ");
  scanf("%d",&number_two);

  the_answer = add_two(number_one,number_two);   /* function call */

  printf("\n Adding %d and %d",number_one,number_two);
  printf(" = %d \n\n",the_answer);

}
/* ====================================================================== */
int add_two(int first,int second)   /* function definition */
{
	return(first + second);
}
/* ====================================================================== */