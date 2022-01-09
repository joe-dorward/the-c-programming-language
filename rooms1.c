/*
  Program "rooms1.c"
  Written by: Joe Dorward
  Date: 06/07/00

  This program asks the user for the number of rooms in a house.
  Then it asks for the length and width of each room,
  calculating the square footage of the house.
*/

#include <stdio.h>

void main(void)
{
int room_number = 0,
    number_of_rooms = 0;

float room_width = 0,
      room_length = 0,
      square_footage = 0;

  printf("How many rooms are in the house: ");
  scanf("%d",&number_of_rooms);

  for (room_number = 1; room_number <= number_of_rooms; room_number++)
  {
    printf("\n How wide is room %d (feet): ",room_number);
    scanf("%f",&room_width);

    printf(" How long is room %d (feet): ",room_number);
    scanf("%f",&room_length);

    square_footage = square_footage + (room_width * room_length);
  }

  printf("\n The %d rooms in the house, have a total",number_of_rooms);
  printf(" square footage of: %0.2f \n\n",square_footage);
}
