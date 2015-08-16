/**************************************/
/* Ex8-3 Averages a series of numbers */
/* 				      */
/* Author: David Ogor		      */
/* Date: 07-10-2015		      */
/**************************************/
#include <stdio.h>
#include <stdlib.h>

/*
 * Calculates the average of a series of numbers.
 *
 * Return the average.
 * TODO: fix EOF
 */
int get_avg(void)
{
  int res = 0;
  char *buf = malloc(sizeof(char) * BUFSIZ);
  char *bufp = buf;
  int cnt = 0; 			/* count of bytes consumed */
  int sum = 0;
  int n = 0;			/* total #s entered */
  int num = 0;			/* number entered by user */

  printf("%d\nEnter a series of numbers: ", sizeof(buf));
  if (fgets(bufp, BUFSIZ, stdin) == NULL) {
    perror("fgets");
    exit(1);
  }
  do {
    res = sscanf(bufp, "%d%n", &num, &cnt);
    bufp += cnt;
    n += res;
    sum += num;
  } while (res != EOF);
  free(buf);

  return sum / n;
}

int main(void)
{
  printf("Average = %d\n", get_avg());

  return 0;
}
