/******************************************************************************/
/* Ex8-1 - Prints a checker board to the screen based on the users size input */
/* 									      */
/* Author: David Ogor							      */
/* Date: 06-23-2015							      */
/* 									      */
/* Purpose: Practice chapter 8						      */
/******************************************************************************/
#include <stdio.h>

#define PLUS printf("+")
#define LINE printf("-----") 	/* length of each line */
#define WALL printf("|     ")
#define WALL_END printf("|")
#define WALL_LENGTH 3		/*  */

/* 
 * Print the specified number of lines.
 */
void print_line(const int n)
{
  int i = 0;
  for (i = 0; i < n; i++) {
     PLUS;
     LINE;
  }
  PLUS;
  printf("\n");
}

/* 
 * Print the specified number of wall.
 */

void print_wall(const int n)
{
  int i = 0;
  int k = 0;
  
  for (i = 0; i < WALL_LENGTH; i++) {
    for (k = 0; k < n; k++) {
      WALL;
    }
    WALL_END;
    printf("\n");
  }
}

int main(void)
{
  int n;
  char buf[10];
  int i = 0;

  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &n);

  for (i = 0; i < n; ++i) {
    print_line(n);
    print_wall(n);
  }
  print_line(n);

  return 0;
}
