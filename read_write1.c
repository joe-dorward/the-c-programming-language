/*
  Program "read_write1.c"

  This program will open any file, read it, and print its contents to the screen
	one character at a time
*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int a_character;   /* variable for reading each character into */

char file_name[15];  /* variable for storing the file name */

FILE *pointer_to_file;   /* the file pointer variable */


  printf("Filename to show: ");   /* ask user for filename */
  gets(file_name);

  pointer_to_file = fopen(file_name,"r");   /* open file for reading */

  a_character = fgetc(pointer_to_file);   /* read first character from file */


  while (a_character != EOF)
  {
    putchar(a_character);   /* write the character to the screen */
	
	a_character = fgetc(pointer_to_file);   /* get next character */
  }

  fclose(pointer_to_file);   /* close file */
}
