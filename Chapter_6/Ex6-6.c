/**********************************************************************************/
/* Ex6-6 - Determines wages for an employee. Includes overtime for hours over 40. */
/* 										  */
/* Author: David Ogor								  */
/* Date: 06-02-2015								  */
/* 										  */
/* Purpose: Practice loops							  */
/**********************************************************************************/
#include <stdio.h>
#define REG 40
#define OVERTIME_PAY 1.5

int main(void)
{
  int res = 0;
  char buf[BUFSIZ];
  int hours = 0;
  float wages = 0.0;
  float paycheck = 0.0;

  do {
    printf("Enter hours worked: ");
    fgets(buf, BUFSIZ, stdin);
    res = sscanf(buf, "%d", &hours);
    printf("Enter wages per hours:");
    fgets(buf, BUFSIZ, stdin);
    res += sscanf(buf, "%f", &wages);
  } while (res != 2);
  
  int overtime = (hours - REG > 0) ? hours - REG : 0;
  paycheck = overtime * (wages * OVERTIME_PAY);
  paycheck += wages * (hours - overtime);

  printf("Your paycheck is $%.2f\n", paycheck);
}
