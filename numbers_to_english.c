/*
  Program: numbers_to_english.c
  Written by: Joe Dorward
  Date: 02/07/01

  This program will:
  * Split a number (up to 4 digits) into its parts
  * Print the number in English to the screen
*/

#include <stdio.h>

void main(void)
{
int the_number = 0,
    the_units = 0,
    the_tens = 0,
    the_hundreds = 0,
    the_thousands = 0;

char dummy = ' ';

  printf("Please enter an integer (up to 9999): ");
  scanf("%d",&the_number);

  //-------------------------------------------------------
  // split the number
  the_thousands = the_number / 1000;
  the_number = the_number - (the_thousands * 1000);
  the_hundreds = the_number / 100;
  the_number = the_number - (the_hundreds * 100);
  the_tens = the_number / 10;
  the_number = the_number - (the_tens * 10);
  the_units = the_number;
  //-------------------------------------------------------
  // do the thousands
  switch (the_thousands)
  {
    case 1:
      printf("One thousand, ");
      break;
    
    case 2:
      printf("Two thousand, ");
      break;
    
    case 3:
      printf("Three thousand, ");
      break;
    
    case 4:
      printf("Four thousand, ");
      break;

    case 5:
      printf("Five thousand, ");
      break;
  }
  //-------------------------------------------------------
  // do the hundreds
  switch (the_hundreds)
  {
    case 1:
      printf("one hundred, and ");
      break;
    
    case 2:
      printf("two hundred, and ");
      break;
          
    case 3:
      printf("three hundred, and ");
      break;
          
    case 4:
      printf("four hundred, and ");
      break;
          
    case 5:
      printf("five hundred, and ");
      break;
          
    case 6:
      printf("six hundred, and ");
      break;
          
    case 7:
      printf("seven hundred, and ");
      break;
          
    case 8:
      printf("eight hundred, and ");
      break;
          
    case 9:
      printf("nine hundred, and ");
      break;
  }
  //-------------------------------------------------------
  // do the tens above 19
  switch (the_tens)
  {
    case 2:
      printf("twenty");
      break;

    case 3:
      printf("thirty");
      break;

    case 4:
      printf("forty");
      break;

    case 5:
      printf("fifty");
      break;

    case 6:
      printf("sixty");
      break;

    case 7:
      printf("seventy");
      break;

    case 8:
      printf("eighty");
      break;

    case 9:
      printf("ninty");
      break;
  }
  //-------------------------------------------------------
  // do the teens & units
  if (the_tens == 1)
  {
    switch (the_units)
    {
      case 1:
        printf("eleven");
        break;

      case 2:
        printf("twelve");
        break;

      case 3:
        printf("thirteen");
        break;

      case 4:
        printf("fourteen");
        break;

      case 5:
        printf("fifteen");
        break;

      case 6:
        printf("sixteen");
        break;
  
      case 7:
        printf("seventeen");
        break;

      case 8:
        printf("eighteen");
        break;

      case 9:
        printf("nineteen");
        break;
    }
  }
  else
  {
    switch (the_units)
    {
      case 1:
        printf("one");
        break;

      case 2:
        printf("two");
        break;

      case 3:
        printf("three");
        break;

      case 4:
        printf("four");
        break;

      case 5:
        printf("five");
        break;

      case 6:
        printf("six");
        break;
  
      case 7:
        printf("seven");
        break;

      case 8:
        printf("eight");
        break;

      case 9:
        printf("nine");
        break;
    }
  }
  printf(". \n");
}