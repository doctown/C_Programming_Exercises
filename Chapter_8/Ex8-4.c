/*******************************************/
/* Ex8-4 - Prints the multiplication table */
/* 					   */
/* Author: David Ogor			   */
/* Date: 07-10-2015			   */
/*******************************************/
#include <stdio.h>

int main(void)
{
  int i, k;

  printf("%30s\n", "MULTIPLICATION TABLE");
  printf("%7s", " ");  
  for (i = 1; i <= 12; ++i) {
    printf("%5d", i); 
  }
  printf("\n\n");
  for (i = 1; i <= 12; ++i) {
    printf("%5d *", i); 
    for (k = 1; k <= 12; ++k) {
      printf("%5d", i * k);
    }
    printf("\n");
  }

  return 0;
}
