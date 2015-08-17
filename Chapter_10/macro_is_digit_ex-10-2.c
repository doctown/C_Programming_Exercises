/************************************************************/
/* Program: Uses a macro to determine if the first character*/
/* is a digit.                                              */
/* 							    */
/* Author: David Ogor					    */
/* Date: 08-04-15					    */
/************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define is_digit(n) (n - '0' >= 0 && n - '0' < 10) ? true : false

int main(void) 
{
  int res = 0;
  char buf[100];
  char c = '\0';

  /* Get input from user. */
  printf("Type in a digit: ");
  if (fgets(buf, sizeof(buf), stdin) == NULL) {
    perror("fgets");
    exit(1);
  }

  sscanf(buf, "%c", &c);
  printf("%c %s a digit\n", c, (is_digit(c)) ? "is" : "is not");
  
  return 0;
}
