/************************************************/
/* Ex6-5 - Calcultate if a year is a leap year. */
/* 					        */
/* Author: David Ogor			        */
/* Date: 06-02-2015			        */
/* 					        */
/* Purpose: Practice loops		        */
/************************************************/
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  char buf[BUFSIZ];
  int year = 0;
  int res = 0;
  bool leap = false;

  do {
    printf("Enter the year:");
    fgets(buf, BUFSIZ, stdin);
    res  = sscanf(buf, "%d", &year);
  } while (res != 1);

  if (year % 4 != 0) {
    leap = false;
  } else if (year % 100 == 0 && year % 400 != 0) {
      leap = false;
  } else {
    leap = true;
  } 

  if (leap) {
    printf("Leap year!\n");
  } else {
    printf("Not a leap year\n"); 
  }
  return 0;
}
