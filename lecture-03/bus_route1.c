/*
  Program bus_route1.c
  Written by: Joe Dorward
  Date: 07/20/00

  This is a simulation of a bus route program
*/

#include <stdio.h>

void main(void)
{
const float bus_fare = 0.75f;

int route_number = 0,
    number_of_stops = 0,
    stop_number = 0,
    passengers_getting_on = 0,
    total_passengers = 0;

char driver_name[25] = "";

  printf("Please enter your name: ");
  gets(driver_name);

  printf("Please enter the route number: ");
  scanf("%d",&route_number);

  printf("Please enter the number of stops on the route: ");
  scanf("%d",&number_of_stops);

  printf("\n");

  for (stop_number = 1; stop_number <= number_of_stops; stop_number++)
  {
    printf("Stop: %d \n",stop_number);
    printf("\t Number of passengers getting on: ");
    scanf("%d",&passengers_getting_on);

    //printf("\t Number of passengers getting off: ");
    //scanf("%d",&passengers_getting_off);

    total_passengers = total_passengers + passengers_getting_on;
   }

   printf("\nThe total number of passengers on route: %d ",route_number);
   printf(" was: %d \n",total_passengers);
   printf("The total fares collected is: $%0.2f \n\n",total_passengers * bus_fare);
}
