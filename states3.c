/*
  Program "states3.c"
  Written by: Joe Dorward
  Date: 06/19/00

  This program uses an array of structures to store the capitals, and
  names of states.

  It then prompts the user for a state name, and searches for that state name.
  If the state name is found, the program prints out the capitol name.
  If the state name is not found, the program prints a not-found message.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int state_number = 0,   // used as loop counter
    flag = 0;

char temp_state_name[15];

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

  printf(" The state capitol database \n\n");
  printf(" Please enter a state name : ");
  gets(temp_state_name);


  while( ( (strcmp(array_of_states[state_number].state_name_field,"") != 0) ) && (flag == 0) )
  {
    if ( strcmp(array_of_states[state_number].state_name_field, temp_state_name) == 0)
    {
      printf(" The capital ");
      printf("of: %s ",array_of_states[state_number].state_name_field);
      printf("is: %s \n",array_of_states[state_number].capital_name_field);

      flag = 1;   // state found
    }
    else
    {
      state_number++;
    }
  }

  if (flag == 0)   // state not found
  {
     printf("\n The state: %s, is not in the database. \n",temp_state_name);
  }
  printf("\n\n ** Exiting Program ** \n\n");
}