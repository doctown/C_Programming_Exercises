/*****************************************/
/* Ex 7-5 Determine if a number is prime */
/* 					 */
/* Author: David Ogor			 */
/* Date: 06-10-2015			 */
/*****************************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool prime(const int n)
{
  bool p = true; 		/* true if a prime */
  
  if (n != 1 && n != 2) {
    if (n % 2 != 0) {
      int i = 3;
      for (; i < n / 2; ++i) {
	if (n % i == 0) {
	  p = false;
	  break;
	}
      }    
    } else {
      p = false;
    }
  }
  return p;
}

int main(int argc, char *argv[]) 
{
  int res = 0;
  char buf[BUFSIZ];
  int num = 0;

  fgets(buf, BUFSIZ, stdin);
  if (res == -1) {
    perror("fget");
    exit(1);
  }
  res = sscanf(buf, "%d", &num);
  printf("%s\n", (prime(num)) ? "true": "false");

  return 0;
}
