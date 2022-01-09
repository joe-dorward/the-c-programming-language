/*
  Program: bigbrother2.c
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of a data structure
*/

#include <stdio.h>   /* list header files */
#include <string.h>

void main(void)
{
  struct a_subject_record  // define a data structure
  {
    char subject_first_name_field[25];
    // add subject's middle name field
    // add subject's last name field

    char subject_street_address_field[50];
    // add subject's city field
    // add subject's zip code field

    char subject_birth_month_field[5];
    // add subject's birth day field
    // add subject's birth year field

    char subject_employer_name_field[15];
    // add subject's job title field
    // add subject's income field
  };


  struct a_subject_record first_subject_record;  // declare a data structure 

  // ====================================================== INPUT DATA
  // get the name data
  printf("Enter the subject\'s first name: ");
  gets(first_subject_record.subject_first_name_field);

  // add subject's middle name field
  // add subject's last name field

  //-------------------------------------------------------
  // get address data
  printf("Enter the subject\'s street address: ");
  gets(first_subject_record.subject_street_address_field);

  // add subject's city field
  // add subject's zip code field

  //-------------------------------------------------------
  // get birth date data
  printf("Enter the subject\'s birth day: ");
  gets(first_subject_record.subject_birth_month_field);

  // add subject's birth day field
  // add subject's birth year field

  //-------------------------------------------------------
  // get employment data
  printf("Enter the subject\'s employer name: ");
  gets(first_subject_record.subject_employer_name_field);

  // add subject's job title field
  // add subject's income field

  // ====================================================== OUTPUT DATA
  // print subject's name data
  printf("\n====================================================\n");

  printf("\nThe subject: \n");
  printf("\t%s ",first_subject_record.subject_first_name_field);

  // add subject's middle name field
  // add subject's last name field

  //-------------------------------------------------------
  // print subject's address data

  printf("\n\nLives at: \n");
  printf("\t%s ",first_subject_record.subject_street_address_field);

  // add subject's city field
  // add subject's zip code field

  //-------------------------------------------------------
  // print subject's birth date data

  printf("\n\nWas born on: \n");
  printf("\t%s ",first_subject_record.subject_birth_month_field);

  // add subject's birth day field
  // add subject's birth year field

  //-------------------------------------------------------
  // print subject's empoyment data

  printf("\n\nIs employed by: \n");
  printf("\t%s ",first_subject_record.subject_employer_name_field);

  // add subject's job title field
  // add subject's income field

  //-------------------------------------------------------

  printf("\n\n");
}
