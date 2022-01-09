/*
	Program highlights_html_file.c
	Written by: Joe Dorward
	Date: 07/26/00

	This program creates a *.html page of lecture "highlights"

	The program will:
    * ask the user to enter a title (which is used as the filename as well)
    * it will then ask the user for each lesson "point" numbering each until
      "quit" is entered for the "point"
    * each point is numbered sequentially
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int point_number = 1,  // declare a loop counter
    sub_point_number = 0;
   
char the_title[25] = "",
     the_point[60] = "",
     the_sub_point[50] = "",
     output_filename[25] = "";

FILE *pointer_to_file;   // the file pointer variable


  // get page title
  printf("Enter the page title: ");
  gets(the_title);

  strcat(output_filename,the_title);  // create the output filename
  strcat(output_filename,".html");

  pointer_to_file = fopen(output_filename,"w");   // open html file

  // start writing the HTML code
  fprintf(pointer_to_file,"<BODY BGCOLOR=lightblue> \n\n");

  fprintf(pointer_to_file,"<CENTER> \n");
  fprintf(pointer_to_file,"<BR>");
  fprintf(pointer_to_file,"<FONT FACE=verdana COLOR=blue SIZE=6>");

  fprintf(pointer_to_file,the_title);  // start writing page title
  fprintf(pointer_to_file," &#150 ");
  fprintf(pointer_to_file," Highlights");
  fprintf(pointer_to_file,"</FONT> \n");
  fprintf(pointer_to_file,"</CENTER> \n\n");

  fprintf(pointer_to_file,"<BR>");
  fprintf(pointer_to_file,"<HR WIDTH=\"90%c\"> \n\n",37);

  // ask user for first point
  printf("\n");
  printf("Please enter the first point (\"quit\" to finish): ");
  gets(the_point);

  fprintf(pointer_to_file,"<FONT FACE=verdana COLOR=blue SIZE=4> \n\n");

  while (strcmp("quit",the_point) != 0)   // check that the input isnt "quit"
  {   
    fprintf(pointer_to_file,"<BLOCKQUOTE>");
    fprintf(pointer_to_file,"%d. ",point_number);
    fprintf(pointer_to_file,"%s ",the_point);
    fprintf(pointer_to_file,"</BLOCKQUOTE> \n");

    printf("Please enter the first point (\"quit\" to finish): ");
    gets(the_point);

    point_number++;   // increment loop counter
  }

  fprintf(pointer_to_file,"\n</FONT> \n\n");

  fprintf(pointer_to_file,"<HR WIDTH=\"90%c \"> \n",37);

  fprintf(pointer_to_file,"\n<CENTER>\n");
  fprintf(pointer_to_file,"\n<P>\n");
  fprintf(pointer_to_file,"\n<FONT FACE=VERDANA SIZE=2 COLOR=blue>\n");
  fprintf(pointer_to_file,"Copyright &copy; 2001, Joseph S. Dorward\n");
  fprintf(pointer_to_file,"\n</FONT>\n");
  fprintf(pointer_to_file,"\n</CENTER>\n");

  fclose(pointer_to_file);	// close file  
}
