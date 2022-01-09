/*
  Program "student5.c"
  Written by: Joe Dorward
  Date: 03/11/00

  A small student details database program using an array of structures
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int entry_number = 0;

char temp_name[25] = "";
char temp_address[50] = "";
char temp_date_of_birth[10] = "";
char temp_program[15] = "";

struct a_student_record   // define the structure
{
  char student_name_field[25];
  char student_address_field[50];
  char student_date_of_birth_field[10];
  char student_program_field[15];
};

struct a_student_record array_of_students[5];   // Declare the array

  // =============================================================
  // get student details
  printf("\n");

  while (entry_number < 5)
  {
    printf(" Enter the student\'s name: ");
    gets(temp_name);
    strcpy(array_of_students[entry_number].student_name_field,temp_name);
       
    entry_number++;   // increment entry_number
  }
  // ===================================================================
  // display all entries

  for (entry_number = 0; entry_number < 5; entry_number++)
  {
    printf("\n Student %d: is: ",entry_number + 1);
    printf("%s, ",array_of_students[entry_number].student_name_field); 
  }
  // ===================================================================
  // Exit program

  printf("\n\n ** Exiting Program ** \n\n");
}