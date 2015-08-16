/*****************************************************************/
/* Ex8-2 Calculate the total resistance of a series of resistors */
/* 								 */
/* Author: David Ofor						 */
/* Date: 06-30s2015						 */
/* 								 */
/* Purpose: Practice chapter 8					 */
/*****************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int res = 0;			/* funtion return value */
  char buf[BUFSIZ];
  float sum = 0.0;
  int num = 0;			/* resistor value read */
  int cnt = 0;			/* count of bytes read */
  char *bufp = buf;

  printf("Enter a series of resistor value: (space between values)");
  fgets(buf, BUFSIZ, stdin);
  while(true) {
    res = sscanf(bufp, "%d%n", &num, &cnt);
    if (res == -1) {
      break;
    }
    sum += 1 / (float) num;
    bufp += cnt;
  } 

  printf("%.2f\n", 1/sum);

  return 0;
}
