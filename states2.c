/*
  Program "states2.c"
  Written by: Joe Dorward
  Date: 06/19/00

  This program uses an array of structures to store the capitals, and
  names of states.
  It then prompts the user to enter the capital of each state, and
  checks their answer
*/
#include <stdio.h>
#include <string.h>

void main(void)
{
int state_number = 0;   // used as loop counter

char temp_capitol_name[15] = "";

struct a_state_record   // define the structure
{
  char state_name_field[15];
  char capital_name_field[15];
};

struct a_state_record array_of_states[55] = {"Alabama", "Montgomery",
                                             "Alaska", "Juneau",
                                             "Arizona", "Phoenix",
                                             "Arkansas", "Little Rock",
                                             "California", "Sacramento",
                                             "Colorado", "Denver"}; 

  // ====================================================================================

  while( strcmp(array_of_states[state_number].state_name_field,"") != 0)
  {
    printf("\nWhat is the capital ");
    printf("of: %s ",array_of_states[state_number].state_name_field);
    gets(temp_capitol_name);

    if ( strcmp(temp_capitol_name,array_of_states[state_number].capital_name_field) == 0)
    {
      printf("Right! \n");
      printf("Good job. \n");
    }
    else
    {
      printf("Wrong! \n");
      printf("It\'s: %s \n",array_of_states[state_number].capital_name_field);
      printf("You dummy. \n");
    }
    state_number++;
  }
  printf("\n\n ** Exiting Program ** \n\n");
}