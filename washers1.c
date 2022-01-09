/*
  Program "washers1.c"

  This program asks the user for the dimensions of a washer
  then calculates the weight of the washer based on the
  weight of 2.25 ounces/cubic inch
*/

#include <stdio.h>

void main(void)
{
const float weight_per_cubic_inch = 2.25f,
            pi = 3.14f;

float washer_diameter = 0,
      hole_diameter = 0,
      washer_thickness = 0,
      washer_volume = 0,
      hole_volume = 0,
      washer_weight = 0;
     
  printf("Please enter the diameter of the washer (inches) : ");
  scanf("%f",&washer_diameter);

  printf("Please enter the diameter of the hole (inches)   : ");
  scanf("%f",&hole_diameter);

  printf("Please enter the thickness of the washer (inches): ");
  scanf("%f",&washer_thickness);

  washer_volume = pi * (washer_diameter / 2) * (washer_diameter / 2) * washer_thickness;
  hole_volume = pi * (hole_diameter / 2) * (hole_diameter / 2) * washer_thickness;
  washer_weight = (washer_volume - hole_volume) * weight_per_cubic_inch;

  printf("\nA washer of: \n");
  printf("\t External diameter: \t %4.2f inches. \n",washer_diameter);
  printf("\t Hole of diameter: \t %4.2f inches. \n",hole_diameter);
  printf("\t Thinckness: \t \t %4.2f inches. \n\n",washer_thickness);
  printf("Weighs: \t \t \t %4.2f ounces. \n\n",washer_weight);
}
