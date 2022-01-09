/*
  Program "phone1b.c"
  Written by: Joe Dorward
  Date: 07/15/00

  This program stores the data in the file "phone.dat"
  */

#include <stdio.h>
#include <string.h>

void main(void)
{
int array_line_number = 0;

char entered_name[50] = "";
char entered_address[70] = "";
char entered_telephone_number[10] = "";

struct a_phone_book_record
{
  char name_field[50];
  char address_field[70];
  char telephone_number_field[10];
};

struct a_phone_book_record my_phone_book[5];

FILE *pointer_to_file;   // file pointer variable

  // ==========================================================================
  // Read data into the array fields
  
  pointer_to_file = fopen("phone.dat","r");

	fgets(entered_name,50,pointer_to_file);   // read first name line from file
	entered_name[strlen(entered_name) - 1] = '\0';

  while (!feof(pointer_to_file))
  {
    strcpy(my_phone_book[array_line_number].name_field,entered_name);

		fgets(entered_address,70,pointer_to_file);
		entered_address[strlen(entered_address) - 1] = '\0';
    strcpy(my_phone_book[array_line_number].address_field,entered_address);

    fgets(entered_telephone_number,10,pointer_to_file);
		entered_telephone_number[strlen(entered_telephone_number) - 1] = '\0';
    strcpy(my_phone_book[array_line_number].telephone_number_field,entered_telephone_number);

		fgets(entered_name,50,pointer_to_file);   // read next name line from file
		entered_name[strlen(entered_name) - 1] = '\0';
		array_line_number++;
  }
	fclose(pointer_to_file);

  // ==========================================================================
  // Display all entries

  for (array_line_number = 0; array_line_number < 5; array_line_number++)
  {
    printf("\n Entry %d: is: ",array_line_number + 1);
      printf("%s, ",my_phone_book[array_line_number].name_field);
      printf("%s, ",my_phone_book[array_line_number].address_field);
      printf("%s.",my_phone_book[array_line_number].telephone_number_field);
  }
  printf("\n\n");
}
