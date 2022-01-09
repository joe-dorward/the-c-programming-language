/*
  Program homepage_html.c
  Written by: Joe Dorward
  Date: 04/26/00

  This program asks the user for some information, 
  and creates a html homepage with it.
*/

#include <stdio.h>

void main(void)
{  

char user_name[25] = "default",
     user_address[30] = "default",
     user_telephone[10] = "defualt",
     dummy = ' ';

FILE *pointer_to_file;   // the file pointer variable

  pointer_to_file = fopen("my_homepage.html","w");   // open file for writing

  // get user information
  printf("Please enter your name: ");
  gets(user_name);
  
  printf("Please enter your address: ");
  gets(user_address);

  printf("Please enter your telephone number: ");
  gets(user_telephone);

  // create the html file
  fprintf(pointer_to_file,"<BODY BGCOLOR=lightblue> \n\n");

  fprintf(pointer_to_file,"<CENTER> \n");

  fprintf(pointer_to_file,"<P>");

  fprintf(pointer_to_file,"<FONT FACE=arial COLOR=blue SIZE=6>Welcome to ");
  fprintf(pointer_to_file,"%s",user_name);
  fprintf(pointer_to_file,"'s Homepage </FONT> \n");
  fprintf(pointer_to_file,"</CENTER> \n");

  fprintf(pointer_to_file,"\n<P>\n");

  fprintf(pointer_to_file,"<CENTER> \n");

  fprintf(pointer_to_file,"\n<TABLE BORDER=2> \n");

  fprintf(pointer_to_file,"\n<TR> \n");

    // add user name to file
    fprintf(pointer_to_file,"  <TD> ");
    fprintf(pointer_to_file," %s ",user_name);
    fprintf(pointer_to_file,"  </TD> \n");

    // add user address to file
    fprintf(pointer_to_file,"  <TD> ");
    fprintf(pointer_to_file," %s ",user_address);
    fprintf(pointer_to_file,"  </TD> \n");

     // add user telephone to file
    fprintf(pointer_to_file,"  <TD> ");
    fprintf(pointer_to_file," %s ",user_telephone);
    fprintf(pointer_to_file,"  </TD> \n");

  fprintf(pointer_to_file,"</TR> \n\n");

  fprintf(pointer_to_file,"</TABLE \n\n");
  fprintf(pointer_to_file,"</CENTER> \n\n");

  fprintf(pointer_to_file,"</BODY>");

  fclose(pointer_to_file);   // close file
}
