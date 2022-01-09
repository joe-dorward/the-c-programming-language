/*
  Program "times2.c"
  Written by: Joe Dorward
  Date: 03/19/00

  This program reads in an integer from the user,
  then writes out the multiplication-table for that integer.
 
  As a demonstration of the use of a for-loop, and field width specifiers.
*/

#include <stdio.h>

void main(void)
{
int times = 0,
    number_of_loops = 0,
    the_answer = 0,
    flag = 0;

  printf("\nThe Multiplication Table Program\n");

  printf("\nWhich multiplication table do you want to try? ");
  scanf("%d",&times);

  for (number_of_loops = 1; number_of_loops <= 12; number_of_loops++)
  {
    printf("* * * * * * * * * * * * * ");
    do
    {
      printf("\nWhat is: ");
      printf("\n%d times %2d = ",times,number_of_loops);
      scanf("%d",&the_answer);

      if (the_answer == times * number_of_loops)
      {
        flag = 1;
        printf("Right answer! \n\n");
      }
      else
      {
        printf("Wrong answer! -- Try again. \n");
      }
    } while (flag == 0);
    flag = 0;
  }
}
