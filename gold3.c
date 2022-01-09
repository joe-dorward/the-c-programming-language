/*
  Program gold3.c
  written by: Joe Dorward
  Date: 04/28/00

  This program assigns float values into an array from a file for the daily 
	price of gold in London.

  Then it asks for a price from the user, and it tells the user
  how many days the price of gold closed in London higher than that.
*/

#include <stdio.h>

void main(void)
{
char file_name[15];  // variable for storing the file name

FILE *pointer_to_file;

int element_number;   // loop counter 

float highest_price = -100,
      lowest_price = 1000,
      london_gold_closing[40];   // enough elements for a month

  printf(" Enter the gold price filename: ");  /* ask user for filename */
  gets(file_name);

  pointer_to_file = fopen(file_name,"r");   /* open file for reading */

  for (element_number = 1; element_number <= 35; element_number++)
  {
		/* read temperatures into array */
	  fscanf(pointer_to_file,"%f",&london_gold_closing[element_number]);
  }

  fclose(pointer_to_file);	/* close file */

 
  for (element_number = 1; element_number <= 35; element_number++)
  {
		// find highest temperature
  	if (london_gold_closing[element_number] > highest_price)   
		{
	    highest_price = london_gold_closing[element_number];
		}

		// find lowest temerature
  	if ( (london_gold_closing[element_number] < lowest_price) && (london_gold_closing[element_number] > 0) )
		{
	    lowest_price = london_gold_closing[element_number];
		}
  }

  printf("\n The highest price of gold last month was: $%3.2f \n",highest_price);
  printf(" The lowest price of gold last month was: $%3.2f \n\n",lowest_price);
}