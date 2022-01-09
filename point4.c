/*
  Program "point4.c"
  written by: Joe Dorward
  Date: 05/04/00

  This program uses an array of integers to store values, and uses
	an array of pointers to keep track of where those values are stored
*/

#include <stdio.h>

void main(void)
{
int the_number = 0,       /* an integer variable */
    array_element,        /* for indicating the array element */
    number_array[10],     /* an integer array */
		*pointer_array[10];   /* an array of pointers to integers */

  /* ask for an integer value */
  printf(" Please enter an integer: ");  

	/* put the value into the variable "the_number" */
	scanf("%d",&the_number); 
  
  /* ask for the array element */
  printf(" Which array element should I put it in (0 - 9): ");  

  /* put the value into the variable "array_element" */
	scanf("%d",&array_element);   

  /* put the value in "the_number" into the array element */
	number_array[array_element] = the_number;   

  /* set the first pointer in the pointer array, 
	   to point to that element in the integer array */
  pointer_array[0] = &number_array[array_element];

/* ======================================================================= */

	/* print to the screen, the value stored in the integer array */
	printf("\n The value stored in the integer array at element: ");
	printf("%d",array_element);
	printf(", is the value: %d",number_array[array_element]);

	/* print to the screen, the value that the first pointer in the 
	   pointer array points to */
  printf("\n The value pointed to, by the first pointer in the ");
	printf("pointer array is: %d \n\n",*pointer_array[0]);

}