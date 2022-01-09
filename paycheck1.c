/*
  Program paycheck1.c
  Written by: Joe Dorward
  Date: 07/18/00

  This program will create the data file "paycheck.dat" 
  containing employee pay details
*/

#include <stdio.h>
#include <string.h>

void main(void)
{    
char employee_name[25],
     dispose = ' ';

int basic_hours = 0,
    overtime_hours = 0;

float pay_rate = 0.0f;

FILE *pointer_to_file;   // the file pointer variable

  pointer_to_file = fopen("paycheck.dat","w");   // open file for writing

	printf(" Enter employee\'s name: ");
	gets(employee_name);

  while (strcmp(employee_name,"quit") != 0)
  {
    fprintf(pointer_to_file,"%s",employee_name);
	  fputc('\n',pointer_to_file);   // add newline

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
  }

  fclose(pointer_to_file);   // close file
}
