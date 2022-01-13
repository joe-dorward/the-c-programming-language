/*
  Program "student3.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of character strings
*/

#include <stdio.h>   /* list header files */
#include <string.h>

void main(void)
{
char student_name[25] = "",
     student_address[50] = "",
     student_date_of_birth[10] = "",
     student_program[25] = "";

  printf(" Enter the student\'s name: ");
  gets(student_name);

  printf(" Enter the student\'s address: ");
  gets(student_address);

  printf(" Enter the student\'s date of birth: ");
  gets(student_date_of_birth);

  printf(" Enter the student\'s program: ");
  gets(student_program);

  printf("\n Student: %s \n",student_name);
  printf(" Address: %s \n",student_address);
  printf(" Date of birth: %s \n",student_date_of_birth);
  printf(" Program: %s \n",student_program);
}
