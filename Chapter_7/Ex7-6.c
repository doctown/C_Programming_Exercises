/*************************************************/
/* Ex7-6 Take a series of #s and shows pos / neg */
/* Author: David Ogor				 */
/* Date: 06-08-2015				 */
/* 						 */
/* Practice design				 */
/*************************************************/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int res = 0;
  int num = 0;
  int count_neg = 0;
  int count_pos = 0;
  char buf[BUFSIZ];

  //  fgets(buf, BUFSIZ, stdin);
  while (true) {
    // res = sscanf(buf, "%d", &num);
    res = scanf("%d", &num);
    if (res == EOF) {
      break;
    }
    printf("%d \n", num);
    if (num < 0) {
      ++count_neg;
    } else {
      ++count_pos;
    }
  }

  printf("%d + #s & %d - #s\n", count_pos, count_neg);
  return 0;
}
