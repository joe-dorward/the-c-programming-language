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
    passengers_getting_off = 0,   //
    passengers_on_board = 0,      //
    total_passengers = 0;

char driver_name[25] = "";

char dummy = ' ';

  printf("Please enter your name: ");
  gets(driver_name);

  printf("Please enter the route number: ");
  scanf("%d",&route_number);

  printf("Please enter the number of stops on the route: ");
  scanf("%d",&number_of_stops);

  printf("\n");

  for (stop_number = 1; stop_number < number_of_stops; stop_number++)
  {
    if (stop_number < number_of_stops)
    {
      printf("Stop: %d \n",stop_number);
      printf("\t Number of passengers getting on: ");
      scanf("%d",&passengers_getting_on);
    }

    if ( (stop_number != 1) && (stop_number != number_of_stops) )
    {
      printf("\t Number of passengers getting off: ");
      scanf("%d",&passengers_getting_off);
    }

    passengers_on_board = passengers_on_board + passengers_getting_on - passengers_getting_off;
    total_passengers = total_passengers + passengers_getting_on;
   }

   printf("\nStop: %d passengers getting off: %d \n",stop_number,passengers_on_board);
   printf("\nThe total number of passengers on route: %d ",route_number);
   printf(" was: %d \n",total_passengers);
   printf("The total fares collected is: $%0.2f \n\n",total_passengers * bus_fare);

  printf(" ** Press any key to finish ...");
  scanf("%c",&dummy);
  scanf("%c",&dummy);
}
