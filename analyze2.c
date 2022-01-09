/*
  Program "analyze2.c"
  Written by: Joe Dorward
  Date: 08/25/00

  This program searches through an array of characters counting the:
  characters, words, and sentences.
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int element_number = 0,
    character_counter = 0,
    space_counter = 0,
    period_counter = 0;

char a_character = ' ',
     a_paragraph[255] = {"This is some text. It is short. It only contains three sentences."};  

// ======================================================================================

  while (a_paragraph[element_number] != '\0')
  {
		if (a_paragraph[element_number] == ' ')
		{
			space_counter++;
		}
    else if (a_paragraph[element_number] == '.')
		{
			period_counter++;
		}
    else
    {
		  character_counter++;
    }

    element_number++;
  }
 
	printf("The text, contains: \n");
	printf("\t %3d characters. \n",character_counter);
	printf("\t %3d words. \n",space_counter);
	printf("\t %3d sentences. \n\n",period_counter);
}