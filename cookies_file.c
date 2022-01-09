/*
  Program cookies_file.c
  Written by: Joe Dorward
  Date: 04/22/01

  This program will the student's  names, and scores from the datafile 
  "scores.dat" and award cookies if the scores are high enough
*/

#include <stdio.h>
#include <string.h>

void main(void)
{    
  char student_name[25] = "default",
       dummy = ' ';

  int student_number = 0;   // loop counter

  float quiz_score = 0.0f;

  struct quiz_record
  {
    char student_name_field[25];
    float student_score_field;
  };

  struct quiz_record quiz_array[15];   // array for names and scores

  FILE *pointer_to_file;  // the file pointer variable

  //-----------------------------------------------------------------------------
  // initialize array

  for (student_number = 0; student_number < 15; student_number++)
  {
    strcpy(quiz_array[student_number].student_name_field,"");
    quiz_array[student_number].student_score_field = 0.0f;
  }
  //-----------------------------------------------------------------------------
  // put data in array

  pointer_to_file = fopen("scores.dat","r");  // open file for reading

	fgets(student_name,25,pointer_to_file);
  student_name[strlen(student_name) - 1] = '\0';

  student_number = 0;  // reset loop counter

  while (!feof(pointer_to_file))
  {
    strcpy(quiz_array[student_number].student_name_field, student_name);  // name into array
    fscanf(pointer_to_file,"%f",&quiz_array[student_number].student_score_field);  // score into array

    dummy = fgetc(pointer_to_file);  // dispose of extra carriage return in file
    
    fgets(student_name,25,pointer_to_file);
    student_name[strlen(student_name) - 1] = '\0'; 

    student_number++;  // increment loop counter
  }
  fclose(pointer_to_file);  // close file

  //---------------------------------------------------------------------------
  // print no cookie winners

  student_number = 0;  // reset loop counter to zero

  printf("No cookies for: \n");

  while (strcmp(quiz_array[student_number].student_name_field,"") != 0)
  {
    if (quiz_array[student_number].student_score_field < 9)
    {
      printf("\t%s, ", quiz_array[student_number].student_name_field);
      printf("who scored: %1.2f \n",quiz_array[student_number].student_score_field);
    }
    student_number++;
  }
  printf("\n");
 
  //---------------------------------------------------------------------------
  // print one cookie winners

  student_number = 0;  // reset loop counter to zero

  printf("One cookie for: \n");

  while (strcmp(quiz_array[student_number].student_name_field,"") != 0)
  {
    if ( (quiz_array[student_number].student_score_field >= 9) && (quiz_array[student_number].student_score_field < 10) )
    {
      printf("\t%s, ", quiz_array[student_number].student_name_field);
      printf("who scored: %1.2f \n",quiz_array[student_number].student_score_field);
    }
    student_number++;
  }

  //---------------------------------------------------------------------------
  // print one cookie winners

  student_number = 0;  // reset loop counter to zero

  printf("\nTwo cookies for: \n");

  while (strcmp(quiz_array[student_number].student_name_field,"") != 0)
  {
    if (quiz_array[student_number].student_score_field == 10)
    {
      printf("\t%s, ", quiz_array[student_number].student_name_field);
      printf("who scored: %1.2f \n",quiz_array[student_number].student_score_field);
    }
    student_number++;
  }
  printf("\n");
}

