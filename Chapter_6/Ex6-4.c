/********************************************************************/
/* Ex6-4 - Determines how much change is needed for values under $1 */
/* 								    */
/* Author: David Ogor						    */
/* Date: 05-30-15						    */
/* 								    */
/* Purpose: Practice loops					    */
/********************************************************************/
#include <stdio.h>

#define VAL(cents, amt) (amt - ((amt / cents) * cents))
#define QUARTER 25
#define DIME 10
#define NICKEL 5

int main(int argc, char *argv[])
{
  char buf[BUFSIZ];
  int amt = 0;
  float famt = 0.0;
  
  printf("Enter an amount less than a $1:");
  fgets(buf, BUFSIZ, stdin);
  sscanf(buf, "%f", &famt);
  
  amt = (famt * 100.0) + 0.5;
  printf("%d quarters\n", amt / QUARTER);
  amt = VAL(QUARTER, amt);
  
  printf("%d dimes\n", amt / DIME);
  amt = VAL(DIME, amt);
  
  printf("%d nickels\n", amt / NICKEL);
  amt = VAL(NICKEL, amt);

  printf("%d pennies\n", amt);

  return 0;
}
