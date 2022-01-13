/*
  Program "student2.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of character strings
*/

#include <stdio.h>   /* list header files */
#include <string.h>

void main(void)
{
char student_name[25] = "";

  printf("\n Enter your name: ");
  gets(student_name);

  printf("\n Hello %s \n",student_name);
}
