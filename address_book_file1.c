/*
  Program: address_book_file1.c
  Written by: Joe Dorward
  Date: 07/15/00

  This program prints (to the screen) the:
  * names
  * addresses
  * telephone numbers 
  of "friends" stored in a data file
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int friend_number = 0;  // loop counter for array

char entered_name[50] = "";
char entered_address[70] = "";
char entered_telephone_number[10] = "";

struct a_phone_book_record
{
  char name_field[50];
  char address_field[70];
  char telephone_number_field[10];
};

struct a_phone_book_record my_phone_book[15];

FILE *pointer_to_file;   // file pointer variable

  // ==========================================================================
  // initialize the array

  for (friend_number = 0; friend_number < 16; friend_number++)
  {
    strcpy(my_phone_book[friend_number].name_field,"");
    // <missing code>
    // <missing code>
  }

  // ==========================================================================
  // read data into the array fields
  
  pointer_to_file = fopen("addresses.dat","r");

  fgets(entered_name,50,pointer_to_file);   // read first name from file
  entered_name[strlen(entered_name) - 1] = '\0';

  friend_number = 0;

  while (!feof(pointer_to_file))
  {
    strcpy(my_phone_book[friend_number].name_field,entered_name);

    // <missing code>
    // <missing code>
    // <missing code>

    // <missing code>
    // <missing code>
    // <missing code>

    fgets(entered_name,50,pointer_to_file);   // read next name from file
    entered_name[strlen(entered_name) - 1] = '\0';

    friend_number++;
  }
  fclose(pointer_to_file);

  // ==========================================================================
  // print contents of the array

  friend_number = 0;

  while (strcmp(my_phone_book[friend_number].name_field,"") != 0 )
  {
    printf("%s, ",my_phone_book[friend_number].name_field);
    // <missing code>
    // <missing code>

    printf("\n");
    friend_number++;
  }
  printf("\n");
}