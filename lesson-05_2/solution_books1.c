/*
  Program "books1.c"
  Written by: Joe Dorward
  Date: 06/19/00

  This program uses an array of structures to store book titles, and
  their authors.

  It then prompts the user to choose between searching by author or title.
  The program then prints out all the books by that author, or the author of 
  that book.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int book_number = 0;   // used as loop counter

char author_name[20] = "",
     book_title[25] = "";

struct books   // define the structure
{
  char author_name_field[20];
  char book_title_field[25];
  char status_field[5];
};

struct books array_of_books[10] = {"John Steinbeck", "Cannery row", "In",
                                   "Scott Fitzgerald", "Tender is the night", "In",
                                   "George Orwell", "Nineteen eighty four", "Out",
                                   "Owen Wister", "The virginian", "Out",
                                   "Somerset Maughum", "The razors edge", "Out",
                                   "George Orwell", "The road to wiggan pier", "In",
                                   "John Steinbeck", "The grapes of wrath", "In"}; 
 
  // ====================================================================================

  printf("\t The Westwood library database \n\n");

  printf("Please enter the author's name: ");
  gets(author_name);

  printf("\nThe author: %s wrote: \n",author_name);
  while( strcmp(array_of_books[book_number].author_name_field,"") != 0)
  {
    if ( strcmp(array_of_books[book_number].author_name_field, author_name) == 0)
    {
      printf("\t %s ",array_of_books[book_number].book_title_field);
      printf("\t Status: %s \n",array_of_books[book_number].status_field);
    }
    book_number++;
  }
 
  printf("\n\n ** Exiting Program ** \n\n");
}
