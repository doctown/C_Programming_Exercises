/**********************************************************************/
/* Program: Uses a macro to determine if a number is divisible by 10. */
/* 								      */
/* Author: David Ogor						      */
/* Date: 08-04-2015						      */
/**********************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* true if number is divisible by 10 */
#define divisible(num) (num % 10 == 0) ? true :	\
  false

int main(int argc, char *argv[])
{
  int res = 0;
  int num = 0;
  char buf[100];
  
  printf("Enter a number: ");
  if (fgets(buf, sizeof(buf), stdin) == NULL) {
    perror("fgets");
    exit(1);
  }

  res = sscanf(buf, "%d", &num);
  if (res != 1) {
    printf("Usage error: digits only\n");
    exit(1);
  }

  printf("%d %s divisible by 10\n", num, (divisible(num)) ? "is" : "is not");
  
  return 0;
}
