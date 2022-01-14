/*
  Program "tiles1.c"
  Written by: Joe Dorward
  Date: 05/17/00

  This program asks for the size of a square tile in inches.
  Then the length and width of a room, then tells the user
  how many tiles are needed to tile the floor of that room.
*/

#include <stdio.h>

void main(void)
{
float tile_size = 0,
      tile_area = 0,
      number_of_tiles = 0,
      room_width = 0,
      room_length = 0,
      room_area = 0;

  printf(" Please enter the size of the tile (in inches): ");
  scanf("%f",&tile_size);

  printf(" Please enter the width of the room (in inches): ");
  scanf("%f",&room_width);

  printf(" Please enter the length of the room (in inches): ");
  scanf("%f",&room_length);

  tile_area = tile_size * tile_size;
  room_area = room_width * room_length;
  number_of_tiles = room_area / tile_area;

  printf("\n To tile a floor, of area: %4.2f inches. \n",room_area);
  printf(" With %4.2f inch tiles. \n",tile_size);
  printf(" Will require %4.2f tiles. \n\n",number_of_tiles);
}
