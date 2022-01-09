/*
  Program to_upper_file.c 
  Written by: Joe Dorward 
  Date: 07/15/00 

  This program:
  * Reads a line of text from a file,
  * Converts only the lowercase letters to uppercase letters
  * Writes the converted string to another file
*/ 

#include <stdio.h> 

int is_lowercase(char); // function prototypes 
char lower_to_upper(char); 

void main(void) 
{ 
char the_string[25] = "",
     input_filename[15] = "",
     output_filename[15] = ""; 

int element_number = 0; 

FILE *pointer_to_file;

  //---------------------------------------------------------------------------
  printf("Please enter the input filename (*.txt): ");
  gets(input_filename);

  pointer_to_file = fopen(input_filename,"r");   // open file for reading
  fgets(the_string,80,pointer_to_file);   // read string
  fclose(pointer_to_file);   // close file
  //---------------------------------------------------------------------------

  printf("The uppercase version \n \t of: %s \n",the_string); 

  while (the_string[element_number] != '\0') 
  { 
    if (is_lowercase(the_string[element_number]) == 1) 
    { 
      the_string[element_number] = lower_to_upper(the_string[element_number]); 
    } 
    element_number++; 
  } 
  printf(" \t is: %s \n",the_string);

  //---------------------------------------------------------------------------
  printf("Please enter the input filename (*.txt): ");
  gets(output_filename);

  pointer_to_file = fopen(output_filename,"w");   // open file for writing
  fprintf(pointer_to_file,"%s",the_string);   // write string
  fclose(pointer_to_file);   // close file
  //---------------------------------------------------------------------------
} 
// ============================================================================ 
int is_lowercase(char the_character)
{
  if ( (the_character >= 'a') && (the_character <= 'z') )
  {
    return(1);
  }
  else
  {
    return(0);
  }
}
// ============================================================================ 
char lower_to_upper(char the_character)
{
  return(the_character - 32);
}