/*
  Program "cars_while.c"
  Written by: Joe Dorward
  Date: 05/30/00

  This is a toll-both program.
  It asks the user to enter the number of passengers in each car that passes through a toll-booth.

  It keeps track of the number of cars, and passengers.
  When a negative number for passengers is entered, the program ends, and prints out the number of 
  passengers and cars that have passed through the toll-booth.
*/

#include <stdio.h>

void main(void)
{
int number_of_passengers = 0,
    total_passengers = 0,
    number_of_cars = 0;


  printf("How many passengers in this vehicle: ");
  scanf("%d",&number_of_passengers);

  while (number_of_passengers > 0)
  {
    number_of_cars++;   // increment car counter
    total_passengers = total_passengers + number_of_passengers;

    printf("How many passengers in this vehicle: ");
    scanf("%d",&number_of_passengers);
  } 

  printf("\n There have been: %d vehicles.\n",number_of_cars);
  printf(" With a total of: %d passengers.\n",total_passengers);
}
