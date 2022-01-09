/*
  Program "grades_array.c"
  Written by: Joe Dorward
  Date: 06/15/00

  This program reports how many students:
  * Took a test
  * How many of each letter grade was scored
  * The highest, lowest, & average score
*/

#include <stdio.h>

void main(void)
{
int student_number = 0,   // loop counter
    highest_score = -200,
    lowest_score = 200,
    total_score = 0,
    a_grades = 0,
    b_grades = 0,
    c_grades = 0,
    d_grades = 0,
	  grade_array[25] = {90, 97, 87, 85, 77, 79, 98, 68, 75, 84, 55, 43, 32, 66, 88};

  do
  { 
    // find the letter grades
    if ( (grade_array[student_number] >= 91) && (grade_array[student_number] < 101) )
    {
      a_grades++;
  	}

    else if ( (grade_array[student_number] >= 81) && (grade_array[student_number] <= 90) )
    {
      b_grades++;
  	}

    else if ( (grade_array[student_number] >= 71) && (grade_array[student_number] <= 80) )
  	{
      c_grades++;
    }

    else if ( (grade_array[student_number] <= 70) && (grade_array[student_number] >= 0) )
  	{
      d_grades++;
    }

    // ========================================================================
    // find the highest score
    if (grade_array[student_number] > highest_score)
    {
      highest_score = grade_array[student_number];
    }

    // find the lowest score
    if ( (grade_array[student_number] < lowest_score) && (grade_array[student_number] != 0) )
    {
      lowest_score = grade_array[student_number];
    }
    // ========================================================================

    total_score = total_score + grade_array[student_number];
	  student_number++;

  } while(grade_array[student_number] != 0);

  printf("\nOf: %d students: \n",student_number);

  printf("  %d earned an `A\' grade \n",a_grades);
  printf("  %d earned a `B\' grade \n",b_grades);
  printf("  %d earned a `C\' grade \n",c_grades);
  printf("  %d earned a `D\' grade \n",d_grades);

  printf("\n  The highest score was: %d \n",highest_score);
  printf("  The lowest score was: %d \n",lowest_score);
  printf("  The average score was: %d \n\n",total_score / student_number);
}
