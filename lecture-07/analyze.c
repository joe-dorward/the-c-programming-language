/*
  Program "analyze.c"

  This program will open a pain text file, and analyze its contents
*/

#include <stdio.h>

void main(void)
{
int a_character,
    character_count = 0,
    newline_count = 0,
    space_count = 0,
    period_count = 0;

char file_name[15];  /* variable for storing the file name */

FILE *pointer_to_file;   /* the file pointer variable */

  printf("Filename to show: ");   /* ask user for filename */
  gets(file_name);

  pointer_to_file = fopen(file_name,"r");   /* open file for reading */

  a_character = fgetc(pointer_to_file);   /* read first character from file */

  while (a_character != EOF)
  {
    character_count++;

    if (a_character == ' ')
    {
      space_count++;
    }

    if (a_character == '.')
    {
      period_count++;
    }

    if (a_character == '\n')
    {
      newline_count++;
    }

    a_character = fgetc(pointer_to_file);   /* get next character */
  }
  fclose(pointer_to_file);   /* close file */

  character_count = character_count - space_count - period_count - newline_count;

  printf("\nThe file: \"%s\" contains: \n",file_name);
  printf("\t %3d characters. \n",character_count);
  printf("\t %3d words. \n",space_count);
  printf("\t %3d sentences. \n",period_count);
  printf("\t %3d lines. \n",newline_count);
}
