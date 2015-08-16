/*****************************************************************************************/
/* Ex6-3 - Generates a letter grade for a grade entered by the user with +/-.            */
/* 											 */
/* Author: David Ogor									 */
/* Date: 05-29-2015									 */
/* 											 */
/* Purpose: Update Ex6-2 to include +/- system for the grade.				 */
/*****************************************************************************************/
#include <stdio.h>

#define GRADE(str) printf("The student's grade is %s", str)
#define A_MIN 91
#define B_MIN 81
#define C_MIN 71
#define D_MIN 61

char line[80]; 			/* input line */
int grade; 		/* students grade */


int main()
{
  char sym = ' ';

  printf("Enter the student's numerical grade: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &grade);

  /* Determine the letter grade */
  if (grade >= A_MIN) {
    GRADE("A");
  } else if (grade >= B_MIN) {
    GRADE("B");
  } else if (grade >= C_MIN) {
    GRADE("C");
  } else if (grade >= D_MIN) {
    GRADE("D");
  } else {
    GRADE("F");
  }

  /* Determine the +/- */
  if (grade < D_MIN) {
    sym = ' ';
  } else if (grade % 10 >= 1 && grade % 10 <= 3) {
    sym = '-';
  } else if (grade % 10 >= 4 && grade % 10 <= 7) {
    sym = ' ';
  } else {
    sym = '+';
  }
  printf("%c\n", sym);

  return 0;
}
