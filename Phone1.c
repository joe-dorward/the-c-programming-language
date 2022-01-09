/*
  Program "phone1.c"
  Written by: Joe Dorward
  Date: 03/11/00

  This program is the C Programming, Level I project.
  It is a small telephone book program, consisting of an array
  of structures
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
/* Declare variables */

int menu_choice = 0,
    number_of_entries = 2,
    loop_counter,
    found,               /* used in searching section */
    entries_looked_at;

char entered_name[50] = "";   // Temporary variables
char entered_address[70] = "";
char entered_area_code[8] = "";
char entered_telephone_number[10] = "";

char catch_return;

struct a_phone_book_record
{
  char name_field[50];
  char address_field[70];
  char area_code_field[8];
  char telephone_number_field[10];
};

struct a_phone_book_record my_phone_book[5] = {"Joe Dorward", "2461 La Palma Avenue, Anaheim", "(714)", "221-9990",
                                               "Your Name",   "Your Address",                  "(714)", "Number"};   /* Declare the array *

/* ============================================================= */
/* Initialize the array fields */

  for (loop_counter = number_of_entries; loop_counter < 5; loop_counter++)
  {
    strcpy(my_phone_book[loop_counter].name_field,"");
    strcpy(my_phone_book[loop_counter].address_field,"");
    strcpy(my_phone_book[loop_counter].area_code_field,"");
    strcpy(my_phone_book[loop_counter].telephone_number_field,"");
  }
/* ============================================================= */
/* Display program menu */

  do   /* Begin loop */
  {
    printf("\n\n Welcome to Joe Dorward's Telephone Book \n\n");

    printf(" Menu Choices \n");
    printf(" 1: Add an entry \n");
    printf(" 2: Display all entries \n");
    printf(" 3: Search for an entry \n");
    printf(" 4: Exit program \n");
    printf(" ");

    scanf("%d", &menu_choice);
    scanf("%c", &catch_return); // = getchar();

/* ============================================================= */
/* Add an entry to telephone book */

    if (menu_choice == 1)
    {
      if (number_of_entries == 5)   /* phone book is full */
      {
        printf("\n The telephone book is full \n");
      }
      else
      {
        printf("\n Enter the new name: ");
        gets(entered_name);
        strcpy(my_phone_book[number_of_entries].name_field,entered_name);

        printf(" Enter the new address: ");
        gets(entered_address);
        strcpy(my_phone_book[number_of_entries].address_field,entered_address);

        printf(" Enter the new area code: ");
        gets(entered_area_code);
        strcpy(my_phone_book[number_of_entries].area_code_field,entered_area_code);

        printf(" Enter the new telephone number: ");
        gets(entered_telephone_number);
        strcpy(my_phone_book[number_of_entries].telephone_number_field,entered_telephone_number);

        number_of_entries++;   /* increment entry_number */
      }
    }   /* end of add an entry */
/* =================================================================== */
/* Display all entries */

    if (menu_choice == 2)
    {
      for (loop_counter = 0; loop_counter < 5; loop_counter++)
      {
        printf("\n Entry %d: is: ",loop_counter + 1);
          printf("%s, ",my_phone_book[loop_counter].name_field);
          printf("%s, ",my_phone_book[loop_counter].address_field);
          printf("%s, ",my_phone_book[loop_counter].area_code_field);
          printf("%s.",my_phone_book[loop_counter].telephone_number_field);
      }
    }   /* end of display all entries */
/* =================================================================== */
/* Search for an entry */

    if (menu_choice == 3)
    {
      entries_looked_at = 0;   /* initialise unique search variable */
      found = 0;

      printf("\n Enter the name to search for: ");
      gets(entered_name);

      do   /* begin search loop */
      {
        if (strcmp(my_phone_book[entries_looked_at].name_field,entered_name) == 0)
        {
          printf("\n %s, ",my_phone_book[entries_looked_at].name_field);
            printf("%s, ",my_phone_book[entries_looked_at].address_field);
            printf("%s ",my_phone_book[entries_looked_at].area_code_field);
            printf("%s.",my_phone_book[entries_looked_at].telephone_number_field);

          found = 1;   /* set entry found exit condition */
        }
        else
        {
	  entries_looked_at++;   /* increment counter variable */
        }
      }
      while (entries_looked_at < 6 && found != 1);

      if (found == 0)   /* entry not found message */
      {
        printf("\n No entry found for: %s",entered_name);
      }

    }   /* end of search for an entry */
/* =================================================================== */
/* Exit program */

  }
  while (menu_choice != 4);

  printf("\n ** Exiting Program ** \n\n");

}   /* end of main function */
