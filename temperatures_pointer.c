/*
  Program: temepratures_pointer.c
  Written by: Joe Dorward
  Date: 10/03/01

  This program uses functions to find:
  * highest 
  * lowest 
  integer values in an integer array
*/

#include <stdio.h>

int find_highest_integer(const int *);  // function prototypes
int find_lowest_integer(const int *);

void main(void)
{
  int lowest_temperature = 0,
      highest_temperature = 0,
      temperature_range = 0,
      temperature_array[25] = {90, 97, 87, 85, 77, 79, 98, 68, 75, 84, 55, 43, 32, 66, 88};

  lowest_temperature = find_lowest_integer(temperature_array);
  highest_temperature = find_highest_integer(temperature_array);
  temperature_range = highest_temperature - lowest_temperature;

  printf("The highest temperature was: %d degrees \n",highest_temperature);
  printf("The lowest temperature was: %d degrees \n",lowest_temperature);
  printf("The temperature range was: %d degrees \n",temperature_range);
}
// ========================================================================
int find_highest_integer(const int *integer_pointer)
{
  // This function will find the highest value in any integer array

  int highest_integer = -1000;

  while (*integer_pointer != 0)  // while the value pointed to isn't zero/null
  {
    if (*integer_pointer > highest_integer)
    {
      highest_integer = *integer_pointer;
    }
    integer_pointer++;
  }
  return(highest_integer);
}
// ========================================================================
int find_lowest_integer(const int *integer_pointer)
{
  // This function will find the lowest value in any integer array

  int lowest_integer = 1000;

  while (*integer_pointer != 0)  // while the value pointed to isn't zero/null
  {
    if (*integer_pointer < lowest_integer)
    {
      lowest_integer = *integer_pointer;
    }
    integer_pointer++;
  }
  return(lowest_integer);
}
// ========================================================================