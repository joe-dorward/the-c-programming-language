/*
  Program "area1.c"

  This program asks the user for the width, and length of a room
  then calculates that rooms area.
*/

#include <stdio.h>

void main(void)
{
float room_width = 0.0f,
      room_length = 0.0f,
      carpet_area = 0.0f;

  printf("Please enter the room width (feet): ");
  scanf("%d",&room_width);

	printf("Please enter the room length (feet): ");
  scanf("%d",&room_length);

  room_area = room_width * room_length;

  printf("\nA room with a width of: %d feet, and length of: %d feet. \n",room_width,room_length);
  printf("Has an area of: %d square feet \n\n",room_area);
}
