/********************************************************************/
/* Ex4-5 Test incorrect print formats with the wrong variable type. */
/* 								    */
/* Author: David Ogor						    */
/* 								    */
/* Date: 05-02-2015						    */
/* 								    */
/* Purpose: Test different format specifiers.			    */
/********************************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
  int d = 5;
  float f = 3.14;
  char a = 'a';

  printf("%%f: %f\n", d);
  printf("%%d: %d\n", f);
  printf("%%c: %d\n", a);

  return 0;
}
