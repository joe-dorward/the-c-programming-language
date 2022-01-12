/*
  Program "customer2.c"
  Written by: Joe Dorward
  Date: 03/30/00

  This program demonstrates a simple use of a data structure
*/

#include <stdio.h>   /* list header files */
#include <string.h>

void main(void)
{
char new_name[25] = "";        /* temporary name variable */
char new_address[50] = "";     /* temparary address variable */
char new_telephone[10] = "";   /* temporary telephone variable */
char new_date_of_birth[15] = "";   /* temporary date of birth variable */

struct a_customer_record   /* define a data structure */
{
  char customer_name_field[25];
  char customer_address_field[50];
  char customer_telephone_field[10];
  char customer_date_of_birth_field[15];
};

struct a_customer_record first_customer_record;   /* declare a data structure */

  /* get the new data to put into the data structure */
  printf("\n Enter the customer\'s name: ");
  gets(new_name);

  /* copy new data into the field's of the structure */
  strcpy(first_customer_record.customer_name_field,new_name);

  /* Now print data from the structure */
  printf("\n The customer\'s name is: ");
  printf("%s",first_customer_record.customer_name_field);
}
