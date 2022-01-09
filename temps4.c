/*
	Program "temps4.c"
	Written by: Joe Dorward
	Date: 04/26/00

	This program based on "temps2.c" reads seven day time high 
	temperatures from a file and puts them into an array then 
	scans the array for the seven day high, and the highest low
*/

#include <stdio.h>

void main(void)
{
char filename[15];  /* variable for storing the file name */

FILE *pointer_to_file;   /* the file pointer variable */


int element_number = 0,      /* declare a loop counter */
    a_temperature,
	highest_temperature = 0,
	lowest_temperature = 100,
	daily_high_temperatures[10];   /* declare an array */


  printf("Enter the temperatures filename: ");   /* ask user for filename */
  gets(filename);


  pointer_to_file = fopen(filename,"r");   /* open file for reading */


  fscanf(pointer_to_file,"%d",&a_temperature);   /* read first temperature from file */


  while (a_temperature != EOF)   /* check for end-of-file character */
  {
	daily_high_temperatures[element_number] = a_temperature;
	element_number++;
    fscanf(pointer_to_file,"%d",&a_temperature);
  }


  fclose(pointer_to_file);	/* close file */


  for (element_number = 0; element_number < 7; element_number++)   /* loop through the array */
  {
	if (daily_high_temperatures[element_number] > highest_temperature)   /* find highest temperature */
	{
	  highest_temperature = daily_high_temperatures[element_number];
	}

	if (daily_high_temperatures[element_number] < lowest_temperature)   /* find lowest temperature */
	{
	  lowest_temperature = daily_high_temperatures[element_number];
	}
  }


  /* print out the highest and lowest high temperature */

  printf("\nThis week's highest high temperature was: ");
  printf("%d degrees\n",highest_temperature);
  printf("This week's lowest high temperature was: ");
  printf("%d degrees\n",lowest_temperature);

  pointer_to_file = fopen("backup.dat","w"); 
  fprintf(pointer_to_file,"%d\n",highest_temperature);
  fprintf(pointer_to_file,"%d\n",EOF);
  fclose(pointer_to_file);	/* close file */
}
