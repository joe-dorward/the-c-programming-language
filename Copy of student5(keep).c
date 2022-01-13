/*
  Program "student5.c"
  Written by: Joe Dorward
  Date: 03/11/00

  It is a small student details database program
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
// Declare variables
int menu_choice = 0,
    entry_number = 0;

char catch_return;   // variable for catching return character

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
  // Initialize the array fields */

  for (entry_number = 0; entry_number < 5; entry_number++)
  {
    strcpy(array_of_students[entry_number].student_name_field,"");
    strcpy(array_of_students[entry_number].student_address_field,"");
    strcpy(array_of_students[entry_number].student_date_of_birth_field,"");
    strcpy(array_of_students[entry_number].student_program_field,"");
  }
  // =============================================================
  // Display program menu

  entry_number = 0;
  do   // Begin loop
  {
    printf("\n\n Welcome to the Westwood College Student Database \n\n");

    printf(" Menu Choices \n");
    printf(" 1: Add an entry \n");
    printf(" 2: Display all entries \n");
    printf(" 4: Exit program \n");
    printf(" ");

    scanf("%d", &menu_choice);
    catch_return = getchar();

    // =============================================================
    // Add an entry to telephone book

    if (menu_choice == 1)
    {
      if (entry_number == 5)   // phone book is full
      {
        printf("\n The database is full \n");
      }
      else
      {
        printf("\n Enter the student\'s name: ");
        gets(temp_name);
        strcpy(array_of_students[entry_number].student_name_field,temp_name);

        printf(" Enter the student\'s address: ");
        gets(temp_address);
        strcpy(array_of_students[entry_number].student_address_field,temp_address);

        printf(" Enter the student\'s date of birth: ");
        gets(temp_date_of_birth);
        strcpy(array_of_students[entry_number].student_date_of_birth_field,temp_date_of_birth);

        printf(" Enter the student\'s program: ");
        gets(temp_program);
        strcpy(array_of_students[entry_number].student_program_field,temp_program);

        entry_number++;   // increment entry_number
      }
    }   // end of add an entry
    // ===================================================================
    // Display all entries

    if (menu_choice == 2)
    {
      for (entry_number = 0; entry_number < 5; entry_number++)
      {
        printf("\n Student %d: is: ",entry_number + 1);
          printf("%s, ",array_of_students[entry_number].student_name_field);
          printf("%s, ",array_of_students[entry_number].student_address_field);
          printf("%s, ",array_of_students[entry_number].student_date_of_birth_field);
          printf("%s.",array_of_students[entry_number].student_program_field);
      }
    }   // end of display all entries
    // ===================================================================
    // Exit program

  }
  while (menu_choice != 4);

  printf("\n ** Exiting Program ** \n\n");

}   // end of main function
