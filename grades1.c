/*
  Program "grades1.c"
  Written by: Joe Dorward
  Date: 06/15/00

  This program asks the student grades, and says how many of
  each letter grade has been achieved
*/

#include <stdio.h>

void main(void)
{
int the_grade = 0,
    a_grades = 0,
    b_grades = 0,
    c_grades = 0,
    d_grades = 0;

  do
  { 
    printf(" Please enter the student\'s grade (0 - 100): ");
    scanf("%d",&the_grade);

    if ( (the_grade >= 91) && (the_grade < 101) )
	  {
      a_grades++;
  	}

    else if ( (the_grade >= 81) && (the_grade <= 90) )
	  {
      b_grades++;
  	}

    else if ( (the_grade >= 71) && (the_grade <= 80) )
  	{
      c_grades++;
	  }

    else if ((the_grade <= 70) && (the_grade >= 0) )
  	{
      d_grades++;
	  }
  } while(the_grade > -1);

  printf("\nThe number of \"A\" grades, is: %d \n",a_grades);
  printf("The number of \"B\" grades, is: %d \n",b_grades);
  printf("The number of \"C\" grades, is: %d \n",c_grades);
  printf("The number of \"D\" grades, is: %d \n",d_grades);
}
