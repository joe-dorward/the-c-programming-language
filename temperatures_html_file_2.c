/*
	Program "temperatures_html.c"
	Written by: Joe Dorward
	Date: 04/26/00

	This program reads temperatures from a file, and puts them into an array.

	The program then scans the array recording 
    * the highest temperature
    * the lowest temperature
    * creates an HTML file emphasizing the highest, lowest temperature
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
int element_number = 0,      // declare a loop counter
    number_of_readings = 0,   // counter for number of temperatures read in
  	highest_temperature = -200,
	  lowest_temperature = 200,
	  temperature_array[100];   // declare an array

char input_filename[25] = "empty",
     output_filename[25] = "",
     the_month[10] = "empty",
     the_year[5] = "empty";

FILE *pointer_to_file;   // the file pointer variable

  // ==========================================================================
  // initialize array with zeros

  for (element_number = 0; element_number <= 99; element_number++)
  {
    temperature_array[element_number] = 0;
  }

  // ==========================================================================
  // get the input filename
  printf("Enter the temperatures filename: ");
  gets(input_filename);

  // open file for reading
  pointer_to_file = fopen(input_filename,"r");   

  fscanf(pointer_to_file,"%s",the_month);  // read in the month
  fscanf(pointer_to_file,"%s",the_year);  // read in the year

  //fgets(the_month,25,pointer_to_file);

  // load data into the array 
  while (!feof(pointer_to_file))   // read all data from the file
  {   
    fscanf(pointer_to_file,"%d",&temperature_array[number_of_readings]);

    number_of_readings++;   // counter number of temperatures read
  }

  fclose(pointer_to_file);	// close file
  
  number_of_readings--;  // decrement value

  // ==========================================================================
	// loop through array and find highest and lowest temperature

  for (element_number = 0; element_number < number_of_readings; element_number++)
  {
		// find highest temperature
  	if (temperature_array[element_number] > highest_temperature)   
		{
	    highest_temperature = temperature_array[element_number];
		}

		// find lowest temerature
  	if (temperature_array[element_number] < lowest_temperature)   
		{
	    lowest_temperature = temperature_array[element_number];
		}
  }
  // ==========================================================================
	
  // print highest temperature
  //printf("\n This week's highest high temperature was: ");   
  //printf("%d degrees\n",highest_temperature);

	// print lowest temperature
  //printf(" This week's lowest high temperature was: ");   
  //printf("%d degrees\n\n",lowest_temperature);

  // ==========================================================================

  strcat(output_filename,the_month);
  strcat(output_filename,".html");
  pointer_to_file = fopen(output_filename,"w");   // open html file

  // create html header
  fprintf(pointer_to_file,"<BODY BGCOLOR=lightblue> \n\n");

  fprintf(pointer_to_file,"<CENTER> \n");

  fprintf(pointer_to_file,"<P>");
  fprintf(pointer_to_file,"<FONT FACE=arial COLOR=blue SIZE=6>");
  fprintf(pointer_to_file,"Daily High Temperatures");
    
  fprintf(pointer_to_file,"<P>");
  fprintf(pointer_to_file,"<FONT FACE=arial COLOR=blue SIZE=6>");
  fprintf(pointer_to_file,"%s",the_month);
  fprintf(pointer_to_file," %s",the_year);

  fprintf(pointer_to_file,"</FONT> \n");

  fprintf(pointer_to_file,"\n<P>\n");

  // create html table
  fprintf(pointer_to_file,"\n<TABLE BORDER=2> \n");

  for (element_number = 0; element_number < number_of_readings; element_number++)
  {
    fprintf(pointer_to_file,"\n<TR> \n");   // start Table Row

    fprintf(pointer_to_file," <TD WIDTH=220> ");

	// write month & day
	if (element_number < 9)
	{
	  if (temperature_array[element_number] == highest_temperature)  // make the highest red
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=red SIZE=2>");
	  }
	  else if (temperature_array[element_number] == lowest_temperature)  // make the lowest blue
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=blue SIZE=2>");
	  }
	  else
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial SIZE=2>");
	  }

	  fprintf(pointer_to_file,"&#160 On: %s &#160 %d the temperature was: ",the_month,element_number + 1);
    fprintf(pointer_to_file,"</FONT> \n");
	  fprintf(pointer_to_file,"</TD> \n");


	  fprintf(pointer_to_file,"<TD> ");  // begin the temperature cell

	  if (temperature_array[element_number] == highest_temperature)  // make the highest red
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=red SIZE=2>");
	  }
		else if (temperature_array[element_number] == lowest_temperature)  // make the lowest blue
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=blue SIZE=2>");
	  }
	  else
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial SIZE=2>");
	  }


      fprintf(pointer_to_file,"&#160 %d",temperature_array[element_number]);  // write temperature
	    fprintf(pointer_to_file,"&deg F &#160");  // write temperature
      fprintf(pointer_to_file,"</TD> \n");

      fprintf(pointer_to_file,"</FONT> \n");
	  
	}
	else
	{
	  if (temperature_array[element_number] == highest_temperature)  // make the highest red
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=red SIZE=2>");
	  }
		else if (temperature_array[element_number] == lowest_temperature)  // make the lowest blue
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=blue SIZE=2>");
	  }
	  else
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial SIZE=2>");
	  }

		fprintf(pointer_to_file,"&#160 On: %s %d the temperature was: ",the_month,element_number + 1);
    fprintf(pointer_to_file,"</FONT> \n");
		fprintf(pointer_to_file,"</TD> \n");


		fprintf(pointer_to_file,"<TD> ");

		if (temperature_array[element_number] == highest_temperature)  // make the highest red
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=red SIZE=2>");
	  }
		else if (temperature_array[element_number] == lowest_temperature)  // make the lowest blue
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial COLOR=blue SIZE=2>");
	  }
	  else
	  {
	    fprintf(pointer_to_file,"<FONT FACE=arial SIZE=2>");
	  }

	  fprintf(pointer_to_file,"<FONT FACE=arial SIZE=2>");
    fprintf(pointer_to_file,"&#160 %d",temperature_array[element_number]);  // write temperature
	  fprintf(pointer_to_file,"&deg F &#160");  // write temperature
    fprintf(pointer_to_file,"</TD> \n");

    fprintf(pointer_to_file,"</FONT> \n");
	  
	}

    fprintf(pointer_to_file,"</TR> \n\n");   // end Table Row
  }

  fprintf(pointer_to_file,"</TABLE \n\n");
  fprintf(pointer_to_file,"</CENTER> \n\n");

  fprintf(pointer_to_file,"</BODY>");

  fclose(pointer_to_file);
}