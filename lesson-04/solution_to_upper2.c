/*
  Program "to_upper2.c"
  Written by: Joe Dorward
  Date: 04/22/00

  This program asks the user for a lowercase string.
  It then converts the lowerecase string to an uppcase string.
*/

#include <stdio.h>

void main(void)
{
  int element_number = 0;  // loop counter

  char the_string[50] = " ";

  /* ====================================================================== */

  printf("\n Please enter a lowercase string: ");
  gets(the_string);

  while (the_string[element_number] != '\0')
  {
    if ( (the_string[element_number] >= 'a' ) && (the_string[element_number] <= 'z') )
    {
      the_string[element_number] = the_string[element_number] - 32;
    }

    element_number++;
  }  

  printf("\n The uppercase string is: \"%s\" \n\n",the_string);
}
