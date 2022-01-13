/*
  Program "menu2.c"
  Written by: Joe Dorward
  Date: 05/15/00

  This program demonstrates a fast food joint ordering menu
*/

#include <stdio.h>

void main(void)
{
const float burger_price = 1.99f,
            cheese_burger_price = 2.10f,
            fries_price = 0.75f,
            onion_rings_price = 1.00f,
            shake_price = 1.25f;

float total_price = 0;

int menu_choice = 0,
    number_of_burgers = 0,
    number_of_cheese_burgers = 0,
    number_of_fries = 0,
    number_of_onion_rings = 0,
    number_of_shakes = 0;

  printf(" Welcome to MacWesty Burger Joint \n");

  do
  {
    printf("\n Menu Choices \n");
    printf(" 1: MacWesty Burger. \n");
    printf(" 2: MacWesty Cheese Burger. \n");
    printf(" 3: MacWesty Fries. \n");
    printf(" 4: MacWesty Onion Rings. \n");
    printf(" 5: MacWesty Shake. \n");
    printf(" 0: Print Bill. \n");
    printf(" ");

    scanf("%d",&menu_choice);
 
    if (menu_choice == 1)
	  {
      printf("\n How many MacWesty Burgers? ");
      scanf("%d",&number_of_burgers);

      total_price = total_price + (burger_price * number_of_burgers);
    }
    else if (menu_choice == 2)
    {
      printf("\n How many MacWesty Cheese Burgers? ");
      scanf("%d",&number_of_cheese_burgers);

      total_price = total_price + (cheese_burger_price * number_of_cheese_burgers);
    }
    else if (menu_choice == 3)
    {
      printf("\n How many MacWesty Fries? ");
      scanf("%d",&number_of_fries);

      total_price = total_price + (fries_price * number_of_fries);
    }
    else if (menu_choice == 4)
    {
      printf("\n How many MacWesty Onion rings? ");
      scanf("%d",&number_of_onion_rings);

      total_price = total_price + (onion_rings_price * number_of_onion_rings);
    }
      else if (menu_choice == 5)
    {
      printf("\n How many MacWesty Shakes? ");
      scanf("%d",&number_of_shakes);

      total_price = total_price + (shake_price * number_of_shakes);
    }
	  
  } while(menu_choice != 0);

  printf("\n =================================== \n");
  printf(" Your order is: \n");

  printf(" %d MacWesty Burgers: ",number_of_burgers);
  printf("$%0.2f \n",burger_price * number_of_burgers);

  printf(" %d MacWesty Cheese Burgers: ",number_of_cheese_burgers);
  printf("$%0.2f \n",cheese_burger_price * number_of_cheese_burgers);

  printf(" %d MacWesty Fries: ",number_of_fries);
  printf("$%0.2f \n",fries_price * number_of_fries);

  printf(" %d MacWesty Onion Rings: ",number_of_onion_rings);
  printf("$%0.2f \n",onion_rings_price * number_of_onion_rings);

  printf(" %d MacWesty Shakes: ",number_of_shakes);
  printf("$%0.2f \n",shake_price * number_of_shakes);

  printf(" For a total price of: $%0.2f \n\n",total_price);
}
