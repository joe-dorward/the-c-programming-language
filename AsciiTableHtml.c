/*
  Program AsciiTableHtml.c
  Written by: Joe Dorward
  Date: 01/05/02

  This creates an ASCII table in html format
*/

#include <stdio.h>

void main(void)
{  
int ascii_value;  

char output_file[25] = "default",
     dummy = ' ';

FILE *pointer_to_file;   // the file pointer variable

  pointer_to_file = fopen("AsciiTableHtml.html","w");   // open file for writing

  fprintf(pointer_to_file,"<BODY BGCOLOR=lightsteelblue> \n\n");
  fprintf(pointer_to_file,"<CENTER> \n");
  fprintf(pointer_to_file,"  <P><FONT FACE=\"arial\" SIZE=5 COLOR=royalblue>The ASCII Table</FONT> \n");
  fprintf(pointer_to_file,"  <P><FONT FACE=\"arial\" SIZE=4 COLOR=cornflowerblue>American Standard Code for Information Interchange</FONT> \n");
  fprintf(pointer_to_file,"</CENTER> \n\n");

  fprintf(pointer_to_file,"<P> \n\n<TABLE BGCOLOR=cornsilk ALIGN=center BORDER=0 CELLPADDING=2> \n\n");

  for (ascii_value = 32; ascii_value < 127; ascii_value += 5)
  {

    fprintf(pointer_to_file,"<TR> \n");

    if (ascii_value == 32)
    {
      fprintf(pointer_to_file,"  <TD ALIGN=center WIDTH=80><FONT FACE=\"Courier New\" COLOR=peru> 32 = &nbsp;</FONT></TD> \n");
    }
    else
    {
      fprintf(pointer_to_file,"  <TD ALIGN=center WIDTH=80><FONT FACE=\"Courier New\" COLOR=peru>%3d = %c</FONT></TD> \n",ascii_value,ascii_value);
    }

    fprintf(pointer_to_file,"  <TD ALIGN=center WIDTH=80><FONT FACE=\"Courier New\" COLOR=peru>%3d = %c</FONT></TD> \n",ascii_value+1,ascii_value+1);
    fprintf(pointer_to_file,"  <TD ALIGN=center WIDTH=80><FONT FACE=\"Courier New\" COLOR=peru>%3d = %c</FONT></TD> \n",ascii_value+2,ascii_value+2);
    fprintf(pointer_to_file,"  <TD ALIGN=center WIDTH=80><FONT FACE=\"Courier New\" COLOR=peru>%3d = %c</FONT></TD> \n",ascii_value+3,ascii_value+3);
    fprintf(pointer_to_file,"  <TD ALIGN=center WIDTH=80><FONT FACE=\"Courier New\" COLOR=peru>%3d = %c</FONT></TD> \n",ascii_value+4,ascii_value+4);
  
    fprintf(pointer_to_file,"</TR> \n\n");
  }
  fprintf(pointer_to_file,"</TABLE> \n\n");

  fprintf(pointer_to_file,"<P>\n\n<CENTER>\n");

  fprintf(pointer_to_file,"  <FONT FACE=\"Comic Sans MS\" SIZE=2 COLOR=cornflowerblue>");
  fprintf(pointer_to_file,"Copyright &copy; 2001, Joseph S. Dorward</FONT>\n");

  fprintf(pointer_to_file,"</CENTER>\n\n");

  fprintf(pointer_to_file,"</BODY> \n");

  fclose(pointer_to_file);   // close file
}
