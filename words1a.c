/*
  Program "words1a.c"
  Written by: Joe Dorward
  Date: 07/08/00

  This program is a fancy version of program words1.c
*/

#include <stdio.h>

void main(void)
{
int element_number = 0,
    character_counter = 0,
		space_counter = 0,
		period_counter = 0;

char a_paragraph[255] = {"This is some text. It is short. It only contains three sentences."};  

// ======================================================================================

  do
  {
		if (a_paragraph[element_number] == ' ')		
			space_counter++;
		else if (a_paragraph[element_number] == '.')
			period_counter++;
    else
      character_counter++;

    element_number++;

  } while(a_paragraph[element_number] != '\0');
 
	printf("\nThe text, contains: \n");
	printf("\t %3d characters. \n",character_counter);
	printf("\t %3d words. \n",space_counter);
	printf("\t %3d sentences. \n\n",period_counter);
}