/*
  Program "phone2.c"
  Written by: Joe Dorward
  Date: 03/11/00

  This program is based on the program "phone1.c", but stores the data in the file "phone.dat"
  */

#include <stdio.h>
#include <string.h>

void main()
{
/* Declare variables */

int menu_choice = 0,
    entry_number = 0,
    loop_counter,
    found,               /* used in searching section */
    entries_looked_at;

char catch_return;   /* variable for catching return character */

char entered_name[50] = "";
char entered_address[70] = "";
char entered_area_code[10] = "";
char entered_telephone_number[10] = "";

struct a_phone_book_record
{
  char name_field[50];
  char address_field[70];
  char area_code_field[10];
  char telephone_number_field[10];
};

struct a_phone_book_record my_phone_book[5];   /* Declare the array */

FILE *pointer_to_file;   /* file pointer variable */

/* ============================================================= */
/* Initialize the array fields */

  for (loop_counter = 0; loop_counter < 5; loop_counter++)
  {
    strcpy(my_phone_book[loop_counter].name_field,"");
    strcpy(my_phone_book[loop_counter].address_field,"");
    strcpy(my_phone_book[loop_counter].area_code_field,"");
    strcpy(my_phone_book[loop_counter].telephone_number_field,"");
  }
/* ============================================================= */
/* Read data into the array fields */
  
  pointer_to_file = fopen("phone.dat","r");

  fgets(entered_name,50,pointer_to_file);   /* read first name line from file */
  entered_name[strlen(entered_name) - 1] = '\0';

  loop_counter = 0;
  while (!feof(pointer_to_file))
  {
    strcpy(my_phone_book[loop_counter].name_field,entered_name);

    fgets(entered_address,70,pointer_to_file);
    entered_address[strlen(entered_address) - 1] = '\0';
    strcpy(my_phone_book[loop_counter].address_field,entered_address);

    fgets(entered_area_code,10,pointer_to_file);
    entered_area_code[strlen(entered_area_code) - 1] = '\0';
    strcpy(my_phone_book[loop_counter].area_code_field,entered_area_code);

    fgets(entered_telephone_number,10,pointer_to_file);
    entered_telephone_number[strlen(entered_telephone_number) - 1] = '\0';
    strcpy(my_phone_book[loop_counter].telephone_number_field,entered_telephone_number);
	  
    fgets(entered_name,50,pointer_to_file);   /* read next name line from file */
    entered_name[strlen(entered_name) - 1] = '\0';
    loop_counter++;
  }
  fclose(pointer_to_file);

  entry_number = loop_counter;
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
    catch_return = getchar();

/* ============================================================= */
/* Add an entry to telephone book */

    if (menu_choice == 1)
    {
      if (entry_number == 5)   /* phone book is full */
      {
        printf("\n The telephone book is full \n");
      }
      else
      {
        pointer_to_file = fopen("phone.dat","a");   /* open the file to add */

        printf("\n Enter the new name: ");
        gets(entered_name);
        strcpy(my_phone_book[entry_number].name_field,entered_name);
        fputc('\n',pointer_to_file);  /* take newline in file */
        fprintf(pointer_to_file,"%s",entered_name);   /* add new name to file */

        printf(" Enter the new address: ");
        gets(entered_address);
        strcpy(my_phone_book[entry_number].address_field,entered_address);
        fputc('\n',pointer_to_file);  /* take newline in file */
        fprintf(pointer_to_file,"%s",entered_address);   /* add new address to file */

        printf(" Enter the new area code: ");
        gets(entered_area_code);
        strcpy(my_phone_book[entry_number].area_code_field,entered_area_code);
        fputc('\n',pointer_to_file);  /* take newline in file */
        fprintf(pointer_to_file,"%s",entered_area_code);   /* add new area code to file */


        printf(" Enter the new telephone number: ");
        gets(entered_telephone_number);
        strcpy(my_phone_book[entry_number].telephone_number_field,entered_telephone_number);				
        fputc('\n',pointer_to_file);  /* take newline in file */
        fprintf(pointer_to_file,"%s",entered_telephone_number);   /* add new phone number to file */

        entry_number++;   /* increment entry_number */
        fclose(pointer_to_file);
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
          printf("\n %s,",my_phone_book[entries_looked_at].name_field);
          printf("%s,",my_phone_book[entries_looked_at].address_field);
          printf("%s,",my_phone_book[entries_looked_at].area_code_field);
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
