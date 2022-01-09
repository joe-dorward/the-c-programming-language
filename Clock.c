/*
  Program "clock.c"
  Written by: Joe Dorward
  Date: 03/12/00

  This program demonstrates the use of the modulus (remainder)
  operator %
*/

#include <stdio.h>

void main(void)
{
int minutes_in = 0,
    the_minutes = 0,
    the_hours =0;

 printf("\n Enter the total number of minutes: ");
 scanf("%d",&minutes_in);

 the_hours = minutes_in / 60;
 the_minutes = minutes_in % 60;

 printf("\n The hours are: %d",the_hours);
 printf("\n The minutes are: %d \n",the_minutes);
}
