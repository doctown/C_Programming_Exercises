/*****************************************************************************************/
/* Ex6-2 - Generates a letter grade for a grade entered by the use.			 */
/* 											 */
/* Author: David Ogor									 */
/* Date: 05-29-2015									 */
/* 											 */
/* Purpose: Using an existing implementation from Example 6-3, practice modifying	 */
/* 	 the existing code.								 */
/*****************************************************************************************/
#include <stdio.h>

#define GRADE(str) printf("The grade is %s\n", str)
#define A_MIN 91
#define B_MIN 81
#define C_MIN 71
#define D_MIN 61

char line[80]; 			/* input line */
int grade; 		/* students grade */


int main()
{
  printf("Enter the student's numerical grade: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &grade);

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

  return 0;
}
