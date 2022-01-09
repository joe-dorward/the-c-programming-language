/*
  Program: calculator_functions.c
  Written by: Joe Dorward
  Date: 10/30/01

  This program performs the function of a menu driven calculator
*/

#include <stdio.h>

int get_menu_choice(void);  // function prototypes
void addition_driver(void);
float get_a_float(void);
float add_two(float, float);

void main(void)
{
  int the_selection = 0;

  do
  {
    the_selection = get_menu_choice();
  
    switch (the_selection)
    {
      case 0: printf("\n * Quitting * \n");
        break;

      case 1: addition_driver();
        break;
    }

  } while (the_selection != 0);
}
//-----------------------------------------------------------------------------
int get_menu_choice(void)
{
  int menu_choice = 0;

  printf("       * * Joe\'s Calculator * * \n\n");

  printf("0. Quit \n");
  printf("1. Addition \n");

  printf("----------------\n");
  printf("Enter choice: ");
  scanf("%d",&menu_choice);

  return(menu_choice);
}
//-----------------------------------------------------------------------------
void addition_driver(void)   // function definition
{
	float first_number = 0.0f,
        second_number = 0.0f;

  printf("---------------------------------------\n");

  first_number = get_a_float();
  second_number = get_a_float();

  printf("\nAdding %4.2f ",first_number);
  printf("and %4.2f ",second_number);
  printf("equals: %4.2f \n",add_two(first_number,second_number));

  printf("---------------------------------------\n");
}
//-----------------------------------------------------------------------------
float get_a_float(void)
{
  float a_float = 0.0f;

  printf("Please enter a floating point number: ");
  scanf("%f",&a_float);

  return(a_float);
}
//-----------------------------------------------------------------------------
float add_two(float first, float second)
{
  return(first + second);
}
//-----------------------------------------------------------------------------
