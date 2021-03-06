/*********************************************************/
/* Ex7-3 Determines how long it will take to send a file */
/* 							 */
/* Author: David Ogor					 */
/* Date: 06-18-2015					 */
/*********************************************************/
#include <stdio.h>
#define SECS 60
#define MINS 60
#define HOURS 60
#define RATE 960

int main(int argc, char *argv[])
{
  int res = 0;
  char buf[BUFSIZ];
  int bytes = 0;

  printf("Enter the number of bytes to transfer: ");
  fgets(buf, BUFSIZ, stdin);
  res = sscanf(buf, "%d", &bytes);

  printf("%d days\n", bytes / (RATE * MINS * SECS * HOURS));

  return 0;
}
