/*
  Program "height1.c"
  written by: Joe Dorward
  Date: 07/05/00

  This program asks for the names, and heights of two
	people, then tells who is the tallest
*/

#include <stdio.h>

void main(void)
{
char first_name[25],
     second_name[25];

int first_height = 0,
    second_height = 0;


  // Ask for first name
  printf(" Please enter the first person's name: ");
	scanf("%s",first_name);

	// Ask for first height
	printf(" Please enter the first person's height (inches): ");
	scanf("%d",&first_height);

	// Ask for second name
  printf("\n Please enter the second person's name: ");
	scanf("%s",second_name);

	// Ask for second height
	printf(" Please enter the second person's height (inches): ");
	scanf("%d",&second_height);

	if (first_height > second_height)
	{
		printf("\n %s is the tallest, at: ",first_name);
	  printf("%d foot, %d inches. \n",first_height / 12,first_height % 12);

		printf(" %s is the shortest, at: ",second_name);
	  printf("%d foot, %d inches. \n\n",second_height / 12,second_height % 12);
	}
	else
	{
		printf("\n %s is the tallest, at: ",second_name);
	  printf("%d foot, %d inches. \n",second_height / 12,second_height % 12);

		printf(" %s is the shortest, at: ",first_name);
	  printf("%d foot, %d inches. \n\n",first_height / 12,first_height % 12);
	}

}