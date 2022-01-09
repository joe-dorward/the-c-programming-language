/*
  Program "grades2.c"
  Written by: Joe Dorward
  Date: 06/15/00

  This program totals students grades in an array
*/

#include <stdio.h>

void main(void)
{
int the_grade = 0,   // loop counter
    a_grades = 0,
    b_grades = 0,
    c_grades = 0,
    d_grades = 0,
	grade_array[25] = {98, 97, 87, 85, 77, 79, 66, 68, 75, 84, 55, 43, 32};

  do
  { 
    if ( (grade_array[the_grade] >= 91) && (grade_array[the_grade] < 101) )
	{
      a_grades++;
  	}

    else if ( (grade_array[the_grade] >= 81) && (grade_array[the_grade] <= 90) )
	{
      b_grades++;
  	}

    else if ( (grade_array[the_grade] >= 71) && (grade_array[the_grade] <= 80) )
  	{
      c_grades++;
	}

    else if ( (grade_array[the_grade] <= 70) && (grade_array[the_grade] >= 0) )
  	{
      d_grades++;
	}

	the_grade++;

  } while(grade_array[the_grade] != 0);

  printf("\nThe number of `A\' grades, is: %d \n",a_grades);
  printf("The number of `B\' grades, is: %d \n",b_grades);
  printf("The number of `C\' grades, is: %d \n",c_grades);
  printf("The number of `D\' grades, is: %d \n\n",d_grades);
}
