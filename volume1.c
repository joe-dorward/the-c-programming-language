/*
  Program "volume1.c"
  written by: Joe Dorward
  Date: 05/06/00

  This program calulates the volume of a hole for filling with concrete
*/

#include <stdio.h>

void main(void)
{
float hole_length,
      hole_width,
			hole_depth,
      hole_volume;

  printf("\n Please enter the length of the hole (inches): ");
  scanf("%f",&hole_length);

  printf(" Please enter the width of the hole (inches): ");
  scanf("%f",&hole_width);

	printf(" Please enter the depth of the hole (inches): ");
  scanf("%f",&hole_depth);
  
  hole_volume = (hole_length / 36) * (hole_width / 36) * (hole_depth / 36);

  printf("\n The volume of the hole that is:\n");
  printf("\t %3.2f inches long.\n",hole_length);
	printf("\t %3.2f inches wide.\n",hole_width);
	printf("\t %3.2f inches deep.\n",hole_depth);
	printf(" Has a volume of: %3.2f cubic yards. \n\n",hole_volume);
}