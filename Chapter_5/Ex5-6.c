/**************************************************/
/* Ex5-6 - Converts minutes to hours and minutes. */
/* 						  */
/* Author: David Ogor				  */
/* Date: 05-22-2015				  */
/* 						  */
/* Purpose: Practice.				  */
/**************************************************/
#include <stdio.h>

#define MINUTES 60

/* 
 * Convert the minutes to hours by updating the passed variables.
 *
 * params: h - number of hours 
 *         m - number of minutes
 */
void convert_to_hr_min(int *h, int *m)
{
  *h = *m / MINUTES;
  *m = *m - (*h * MINUTES);
}

int main(int argc, char *argv[])
{
  int res = 0;
  int hours = 0;
  int min = 0;
  int old_min = 0;
  char buf[BUFSIZ];

  do {
    printf("Enter the minutes:");
    fgets(buf, BUFSIZ, stdin); 
    res = sscanf(buf, "%d", &min);
  } while (res != 1);

  old_min = min;
  convert_to_hr_min(&hours, &min);

  printf("%d minutes = %d hours %d minutes\n", old_min, hours, min);
 
  return 0;
}
