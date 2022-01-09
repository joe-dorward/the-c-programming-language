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
char employee_name[25] = "default",
     dummy = ' ';

int basic_hours = 0,
    overtime_hours = 0;

float pay_rate = 0.0f,
      basic_pay = 0.0f,
      overtime_pay = 0.0f,
      gross_pay = 0.0f,
      tax_paid = 0.0f,
      net_pay = 0.0f;

FILE *pointer_to_file;   // the file pointer variable

  pointer_to_file = fopen("paycheck1b.dat","r");   // open file for writing

	fgets(employee_name,25,pointer_to_file);
  employee_name[strlen(employee_name) - 1] = '\0';

  while (!feof(pointer_to_file))
  {
    fscanf(pointer_to_file,"%f",&pay_rate);
    fscanf(pointer_to_file,"%d",&basic_hours);
    fscanf(pointer_to_file,"%d",&overtime_hours);
    dummy = fgetc(pointer_to_file);
    
    basic_pay = basic_hours * pay_rate;
    overtime_pay = overtime_hours * pay_rate * 1.5f;
    gross_pay = basic_pay + overtime_pay;
    tax_paid = (basic_hours * pay_rate + overtime_hours * pay_rate * 1.5f) * 0.2f;
    net_pay = gross_pay - tax_paid;


    printf("Employee: %s \n",employee_name);
    printf("Basic pay: $%0.2f \n",basic_pay);
    printf("Overtime pay: $%0.2f \n",overtime_pay);
    printf("Gross pay: $%0.2f \n",gross_pay);
    printf("Tax: $%0.2f \n",tax_paid);
    printf("Net pay: $%0.2f \n",net_pay);
    printf("=========================\n");

	  fgets(employee_name,25,pointer_to_file);
    employee_name[strlen(employee_name) - 1] = '\0';
  }
  fclose(pointer_to_file);   // close file
}

