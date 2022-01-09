/*
  Program hide_input.c
	Written by: Joe Dorward
	Date: 08/22/01

  This program reads characters from the keyboard, but does not
  echo them to the screen.
  It writes the '*' character to the screen instead.
*/

#include <stdio.h>
#include <conio.h>

void main(void)
{
  char the_character = ' ';

  do
  {
    the_character = getch();
    putchar('*');

  } while (the_character != 'q');
}
