/*
  Program: validate_string.c
  Written by: Joe Dorward
  Date: 10/30/01

  This program:
  * validates that a string contains a real number
  * then converts that string to a double

  NOTE:
  atof("12 dogs") returns 12
  atof("a 12 dogs") returns 0
  atof("12.5") returns 12.5
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//-----------------------------------------------------------------------------
void main(void)
{
  int element_number = 0;

  double real_number = 0.0;

  char the_number[20] = {0};

  printf("Please enter a real number: ");
  scanf("%s",&the_number);

  check_for_zeros(the_number);

  if (check_for_zeros(the_number) != 0)
  {
    real_number = atof(the_number);
  }
  else
}
//-----------------------------------------------------------------------------
float validate_float(char input_string[20])
{
  

  if (check_for_zeros(the_number) == 0)  // string full of zeros
  {
    return(0);
  }
  else
  {
  if (atof(the_number) > 0)  // string contains a real number
  {
    real_number = atof(the_number);

    
  }
  else
  {
    cout << "\nIt's NOT real" 
         << endl;
  }    
}
//-----------------------------------------------------------------------------
int check_for_zeros(char input_string[20])
{
  int element_number = 0;

  while (the_number[element_number] != '\0')  // the string contains
  {
    if (the_number[element_number] == '0')
    {
       zeros++;
    }

    element_number++;
  }

  return(zeros - strlen(the_number);  // zero if 
}
//-----------------------------------------------------------------------------