/******************************************************************************************/
/* Determine the difference between two times in minutes. Uses structs to  store the date */
/* 											  */
/* Author: David O									  */
/* Date: 08-25-2015									  */
/******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct date_time {
  short month;
  short day;
  short year;
  short hour;
  short min;
};

/* 
 * Gets the date and time from standard in and calculates the difference in time.
 */
void getDateTime() 
{
  int res = 0;			/* function result */
  int i = 0; 			/* counter var */
  int diff = 0; 		/* time difference */
  char buf[100];
  struct date_time dt[2];

  
  for (i = 0; i < 2; ++i) {
    printf("Enter %s date (#month#/#day#/#year#): ", (i == 0) ? "the" : "another");
    if (fgets(buf, sizeof(buf), stdin) == NULL) {
      perror("fgets");
      exit(1);
    }

    res = sscanf(buf, "%hd/%hd/%hd", &dt[i].month, &dt[i].day, &dt[i].year);
    if (res != 3) {
      fprintf(stderr, "Incorrect date format: %s\n", buf);
      exit(1);
    }
    
   printf("Enter %s time (#hour#:#min#): ", (i == 0) ? "the" : "another");
    if (fgets(buf, sizeof(buf), stdin) == NULL) {
      perror("fgets");
      exit(1);
    }

   res = sscanf(buf, "%hd:%hd", &dt[i].hour, &dt[i].min);
   if (res != 2) {
     fprintf(stderr, "Incorrect time format: %s\n", buf);
      exit(1);
    }
  }

  diff = (dt[0].hour * 60 + dt[0].min) - (dt[1].hour * 60 + dt[1].min);
    printf("The difference is %d minutes.\n", abs(diff));
}

int main(int argc, char *argv[])
{
  getDateTime();

  return 0;
}
