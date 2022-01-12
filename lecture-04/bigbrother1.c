/*
  Program "bigbrother1.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of character strings
*/

#include <stdio.h>   /* list header files */
#include <string.h>

void main(void)
{
char subjects_name[25] = "",
     subjects_address[50] = "",
     subjects_date_of_birth[10] = "",
     subjects_income[25] = "";

  // get the information
  printf(" Enter the subject\'s name: ");
  gets(subjects_name);

  printf(" Enter the subject\'s address: ");
  gets(subjects_address);

  printf(" Enter the subject\'s date of birth: ");
  gets(subjects_date_of_birth);

  printf(" Enter the subject\'s income: ");
  gets(subjects_income);

  // print out the information
  printf("\n Subject: %s \n",subjects_name);
  printf(" Lives at: %s \n",subjects_address);
  printf(" Date of birth is: %s \n",subjects_date_of_birth);
  printf(" Anual income is: %s \n\n",subjects_income);
}
