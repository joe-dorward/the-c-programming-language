/*
  Program "states5.c"
  Written by: Joe Dorward
  Date: 07/20/00

  This program is based on program states3.c, but uses a datafile and
  asks which field the user wants to search on
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int state_number = 0,   // used as loop counter
    capitol_number = 0,
    flag = 0,
    array_line_number = 0;

char temp_state_name[15],
     temp_capitol_name[15],
     choice[15];

struct a_state_record   // define the structure
{
  char state_name_field[15];
  char capitol_name_field[15];
};

struct a_state_record array_of_states[55]; 

FILE *pointer_to_file;
 
  // ====================================================================================
  // load array with data

  pointer_to_file = fopen("states.dat","r");

	fgets(temp_state_name,15,pointer_to_file);   // read first name line from file
	temp_state_name[strlen(temp_state_name) - 1] = '\0';

  while (!feof(pointer_to_file))
  {
    strcpy(array_of_states[array_line_number].state_name_field,temp_state_name);

    fgets(temp_capitol_name,15,pointer_to_file);
		temp_capitol_name[strlen(temp_capitol_name) - 1] = '\0';
    strcpy(array_of_states[array_line_number].capitol_name_field,temp_capitol_name);

  	fgets(temp_state_name,15,pointer_to_file);   // read first name line from file
	  temp_state_name[strlen(temp_state_name) - 1] = '\0';

		array_line_number++;
  }
	fclose(pointer_to_file);
  
//  printf("Testing: %s ",array_of_states[4].state_name_field);
// ============================================================================

  printf(" The state & capitol database \n\n");

  printf("Search for (capitol/state): ");
  gets(choice);

  if (strcmp(choice,"capitol") == 0)
  {
    printf("\nPlease enter a state name : ");
    gets(temp_state_name);

    while( ( (strcmp(array_of_states[state_number].state_name_field,"") != 0) ) && (flag == 0) )
    {
      if ( strcmp(array_of_states[state_number].state_name_field, temp_state_name) == 0)
      {
        printf("The capital ");
        printf("of: %s ",array_of_states[state_number].state_name_field);
        printf("is: %s \n",array_of_states[state_number].capitol_name_field);

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
  }
  else if (strcmp(choice,"state") == 0)
  {
    printf("\nPlease enter a capitol name : ");
    gets(temp_capitol_name);

    while( ( (strcmp(array_of_states[capitol_number].capitol_name_field,"") != 0) ) && (flag == 0) )
    {
      if ( strcmp(array_of_states[capitol_number].capitol_name_field, temp_capitol_name) == 0)
      {
        printf("%s is the capitol ",array_of_states[capitol_number].capitol_name_field);
        printf("of: %s \n",array_of_states[capitol_number].state_name_field);

        flag = 1;   // state found
      }
      else
      {
        capitol_number++;
      }
    }
  
    if (flag == 0)   // state not found
    {
       printf("\n The capitol: %s, is not in the database. \n",temp_capitol_name);
    }
  }
  printf("\n\n ** Exiting Program ** \n\n");
}