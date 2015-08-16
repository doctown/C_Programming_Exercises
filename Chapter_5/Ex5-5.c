/**************************************************/
/* Ex5-5 - Converts hours and minutes to minutes. */
/* 						  */
/* Author: David Ogor				  */
/* Date: 05-22-2015				  */
/* 						  */
/* Purpose: Practice.				  */
/**************************************************/
#include <stdio.h>

#define MINUTES 60

/* 
 * Convert the hours and minutes to minutes.
 *
 * params: h - number of hours 
 *         m - numebr of minutes
 * returns the total number of minutes.
 */
int convert_to_minutes(int const h, int const m)
{
  return (h * MINUTES) + m;
}

int main(int argc, char *argv[])
{
  int res = 0;
  int hours = 0;
  int min = 0;
  char buf[BUFSIZ];

  do {
    printf("Enter the hours:minutes:");
    fgets(buf, BUFSIZ, stdin); 
    res = sscanf(buf, "%d:%d", &hours, &min);
    if (res != 2)
      res = sscanf(buf, "%d %d", &hours, &min);
  } while (res != 2);

  printf("%d hours %d minutes = %d minutes\n", hours, min, convert_to_minutes(hours, min));
 
  return 0;
}
