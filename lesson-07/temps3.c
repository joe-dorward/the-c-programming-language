/*
  Program "temps3.c"
  Written by: Joe Dorward
  Date: 04/26/00

  This program is based on temps2.c, it reads temperatures from a file, and
  puts them into an array.

  The program then scans the array for the highest, and low temperature, and 
  prints them out.
*/

#include <stdio.h>

void main(void)
{
char file_name[15];  // variable for storing the file name

FILE *pointer_to_file;   // the file pointer variable

int number_of_readings = 0,
    element_number = 0,      // declare a loop counter
    highest_temperature = 0,
    lowest_temperature = 200,
    daily_high_temperatures[35];   // declare an array

  printf("Enter the temperatures filename: ");  // ask user for filename
  gets(file_name);

  pointer_to_file = fopen(file_name,"r");   // open file for reading

  // ==========================================================================
  // load data into the array 

  while (!feof(pointer_to_file))
  {   
    fscanf(pointer_to_file,"%d",&daily_high_temperatures[number_of_readings]);
    number_of_readings++;
  }

  fclose(pointer_to_file);	// close file

  number_of_readings--;   // decrement to actual number of readings

  //printf("The number of readings: %d",number_of_readings);

  // ==========================================================================
  // loop through array and find highest and lowest temperature

  for (element_number = 0; element_number < number_of_readings; element_number++)
  {
    // find highest temperature
    if (daily_high_temperatures[element_number] > highest_temperature)   
    {
      highest_temperature = daily_high_temperatures[element_number];
    }

    // find lowest temerature
    if (daily_high_temperatures[element_number] < lowest_temperature)   
    {
      lowest_temperature = daily_high_temperatures[element_number];
    }
  }
  // ==========================================================================
  // print highest temperature

  printf("\n This week's highest high temperature was: ");   
  printf("%d degrees\n",highest_temperature);

  // print lowest temperature
  printf(" This week's lowest high temperature was: ");   
  printf("%d degrees\n\n",lowest_temperature);
}
