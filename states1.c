/*
  Program "states1.c"
  Written by: Joe Dorward
  Date: 06/19/00

  This program uses an array of structures to store the capitals, and
  names of states.
  It then prints the name, and capital of each state
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int state_number = 0;   // used as loop counter

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
 
  // =============================================================

  while( strcmp(array_of_states[state_number].state_name_field,"") != 0)
  {
    printf("The capital ");
    printf("of: %s ",array_of_states[state_number].state_name_field);
    printf("is: %s \n",array_of_states[state_number].capital_name_field);

    state_number++;
  }

  printf("\n\n ** Exiting Program ** \n\n");
}