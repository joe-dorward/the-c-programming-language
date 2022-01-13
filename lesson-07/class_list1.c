/*
  Program class_list1.c
  Written by: Joe Dorward
  Date: 04/26/00

  This program will open the file "class_list.dat",
  and allow the user to add a name to the file
*/

#include <stdio.h>

void main(void)
{    
char student_name[25];

FILE *pointer_to_file;   // the file pointer variable

  pointer_to_file = fopen("class_list.dat","a");   // open file for adding

  printf("\nPlease enter the student\'s name: ");
  gets(student_name);

  fprintf(pointer_to_file,"%s",student_name);
  fputc('\n',pointer_to_file);   // start newline in the file

  fclose(pointer_to_file);   // close file
  // =========================================================================
  pointer_to_file = fopen("class_list.dat","r");   // open file for reading

  fgets(student_name,25,pointer_to_file);   // read first name from file

  while (!feof(pointer_to_file))   // while not end-of-file
  {
    printf("%s",student_name);
    fgets(student_name,25,pointer_to_file);   // read name from file
  }

  fclose(pointer_to_file);   // close file
}
