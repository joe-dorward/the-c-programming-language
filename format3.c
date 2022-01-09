/*
  Program "format3.c"
  Written by: Joe Dorward
  Date: 12/03/00

  This program prints out formatted names and addresses to the screen.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
unsigned int loop_counter = 0;

char first_name[25] = "John Smith",
     first_address[25] = "21 Hill Street",
     second_name[25] = "Frederick Campbell",
     second_address[25] = "8 Avenue A",
     third_name[25] = "J Gray",
     third_address[25] = "21334 Magnolia Avenue";

  
  printf("%s",first_name);
  for (loop_counter = strlen(first_name) ; loop_counter < 40; loop_counter++) printf(".");
  printf("%s \n",first_address);

  printf("%s",second_name);
  for (loop_counter = strlen(second_name) ; loop_counter < 40; loop_counter++) printf(".");
  printf("%s \n",second_address);

  printf("%s",third_name);
  for (loop_counter = strlen(third_name) ; loop_counter < 40; loop_counter++) printf(".");
  printf("%s \n",third_address);

  printf("\n\n");
}
