/*
  Program "numbers2.c"
  Written by: Joe Dorward
  Date: 05/15/00

  This program asks the user for a whole-number in the range 0 - 19,
  then prints out the number in English.
*/

#include <stdio.h>

void main(void)
{
int the_number;

  do
  { 
    printf("\n Please enter a whole-number (0 - 2): ");
    scanf("%d",&the_number);

    if (the_number == 0)
	  {
      printf("\n Zero. \n");
  	}
    else if (the_number == 1)
	  {
      printf("\n One. \n");
  	}
    else if (the_number == 2)
  	{
      printf("\n Two. \n");
	  }
    else if (the_number == 3)
  	{
      printf("\n Three. \n");
  	}
    else if (the_number == 4)
  	{
      printf("\n Four. \n");
  	}
    else if (the_number == 5)
  	{
      printf("\n Five. \n");
  	}
    else if (the_number == 6)
  	{
      printf("\n Six. \n");
  	}
    else if (the_number == 7)
  	{
      printf("\n Seven. \n");
  	}
    else if (the_number == 8)
  	{
      printf("\n Eight. \n");
  	}
    else if (the_number == 9)
  	{
      printf("\n Nine. \n");
	  }
    else if (the_number == 10)
  	{
      printf("\n Ten. \n");
	  }
        else if (the_number == 11)
  	{
      printf("\n Eleven. \n");
	  }
        else if (the_number == 12)
  	{
      printf("\n Twelve. \n");
	  }
        else if (the_number == 13)
  	{
      printf("\n Thirteen. \n");
	  }
        else if (the_number == 14)
  	{
      printf("\n Fourteen. \n");
	  }
        else if (the_number == 15)
  	{
      printf("\n Fifteen. \n");
	  }
        else if (the_number == 16)
  	{
      printf("\n Sixteen. \n");
	  }
        else if (the_number == 17)
  	{
      printf("\n Seventeen. \n");
	  }
        else if (the_number == 18)
  	{
      printf("\n Eighteen. \n");
	  }
        else if (the_number == 19)
  	{
      printf("\n Nineteen. \n");
	  }
  } while(the_number > -1);
}
