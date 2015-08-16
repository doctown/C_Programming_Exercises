
/***************************************************************/
/* Ex4-4.c Prints the word Hello in big block letters.	       */
/* 							       */
/* Author: David Ogor					       */
/* 							       */
/* Revisions: 						       */
/*            05-02-15    Created program		       */
/* 							       */
/* Purpose: Display a message on the screen.          	       */
/***************************************************************/

#include <stdio.h>

#define HEIGHT 7		/* height of the letter */
#define WIDTH 5			/* width of the letter */
#define SYM '#'			/* symbol to be printed*/
#define SPACE 1			/* use the number 1 to define the size of a single space */

/*
 * Print a set of character and provide a specified number of spaces afterwards.
 */
void print_letter(int letternum, int spacenum)
{
  int i = 0;
  int j = 0;

  while (i++ < letternum)
    printf("%c", SYM);
  while (j++ < spacenum)
    printf(" ");
}

/*
 * Print a line in a character.
 */
void print_line()
{
  print_letter(WIDTH, SPACE);
}

/*
 * Print a character and 4 spaces afterward.
 */
void print_one_char()
{
  print_letter(1, WIDTH);
}

/*
 * Print a character and 3 spaces afterward.
 */
void print_one_between()
{
  print_letter(1, WIDTH - 2);
}

/* 
 * Print a character and one space.
 */
void print_one_space()
{
  print_letter(1, SPACE);
}

/* 
 * Print a character and no space at the end.
 */
void print_one_end()
{
  print_letter(1, 0);
}



int main(int argc, char *argv[]) 
{
    /* print first line */
    print_one_between();
    print_one_space();
    print_line();
    print_one_char();
    print_one_char();
    print_line();
    printf("\n");

    /* print second line */
    print_one_between();
    print_one_space();
    print_one_char();
    print_one_char();
    print_one_char();
    print_one_between();
    print_one_end();
    printf("\n");
   
    /* print third line */
    print_line();
    print_line();
    print_one_char();
    print_one_char();
    print_one_between();
    print_one_end();
    printf("\n");  

    /* print fourth line */
    print_one_between();
    print_one_space();
    print_one_char();
    print_one_char();
    print_one_char();
    print_one_between();
    print_one_end();
    printf("\n");

    /* print fifth line */
    print_one_between();
    print_one_space();
    print_line();
    print_line();
    print_line();
    print_line();
    printf("\n");

  return 0;
}
