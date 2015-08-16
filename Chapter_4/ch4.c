/*************************************************/
/* Practical C					 */
/* 						 */
/* Chapter 4: Basic Declarations and Expressions */
/* 						 */
/* Date: 4/21/2015				 */
/*************************************************/

#include <stdio.h>

void float_casting() {
  float answer;			/* The result of our calculation */
  answer = 1.0 / 3;

  printf("The result of 1/3 is %f\n", answer);
  printf("The result with int %d\n", answer);
}

/*
  Print a number
*/
void ex4_5 () {
  printf("The answer is %d\n");
}

int main(int argc, char *argv[]) {

  float_casting();
  
  ex4_5();


  return(0);
}
