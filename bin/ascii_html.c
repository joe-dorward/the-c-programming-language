/*
  Program paycheck2b.c
  Written by: Joe Dorward
  Date: 07/18/00

  This program will read the data file "paycheck.dat" 
  containing employee pay details and generate a paystub
*/

#include <stdio.h>
#include <string.h>

void main(void)
{  
int ascii_value;  

char output_file[25] = "default",
     dummy = ' ';

FILE *pointer_to_file;   // the file pointer variable

  pointer_to_file = fopen("ascii.html","w");   // open file for writing

  fprintf(pointer_to_file,"<BODY BGCOLOR=lightblue>");
  fprintf(pointer_to_file,"<CENTER>");
  fprintf(pointer_to_file,"<FONT FACE=\"arial\" SIZE=5>ASCII Table</FONT>");
  fprintf(pointer_to_file,"</CENTER>");

  fprintf(pointer_to_file,"<P> <CENTER>");

  fprintf(pointer_to_file,"<TABLE BORDER=1 CELLPADDING=2>");

  for (ascii_value = 32; ascii_value < 127; ascii_value += 5)
  {
    fprintf(pointer_to_file,"<TR>");

    fprintf(pointer_to_file,"<TD ALIGN=CENTER WIDTH=80> %3d = %c </TD>",ascii_value,ascii_value);
    fprintf(pointer_to_file,"<TD ALIGN=CENTER WIDTH=80> %3d = %c </TD>",ascii_value+1,ascii_value+1);
    fprintf(pointer_to_file,"<TD ALIGN=CENTER WIDTH=80> %3d = %c </TD>",ascii_value+2,ascii_value+2);
    fprintf(pointer_to_file,"<TD ALIGN=CENTER WIDTH=80> %3d = %c </TD>",ascii_value+3,ascii_value+3);
    fprintf(pointer_to_file,"<TD ALIGN=CENTER WIDTH=80> %3d = %c </TD>",ascii_value+4,ascii_value+4);
  
    fprintf(pointer_to_file,"</TR>");
  }
  fprintf(pointer_to_file,"</TABLE>");

  fprintf(pointer_to_file,"</CENTER>");
  fprintf(pointer_to_file,"</BODY>");

  fclose(pointer_to_file);   // close file
}

/*
 printf(" Enter employee\'s pay rate: ");
    scanf("%f",&pay_rate);
    fprintf(pointer_to_file,"%0.2f",pay_rate);
	  fputc('\n',pointer_to_file);   // add newline

    printf(" Enter basic hours worked: ");
    scanf("%d",&basic_hours);
    fprintf(pointer_to_file,"%d",basic_hours);
	  fputc('\n',pointer_to_file);   // add newline

    printf(" Enter overtime hours worked: ");
    scanf("%d",&overtime_hours);
    fprintf(pointer_to_file,"%d",overtime_hours);
	  fputc('\n',pointer_to_file);   // add newline

    dispose = getchar();
  	printf(" Enter employee\'s name: ");
  	gets(employee_name);
    */
