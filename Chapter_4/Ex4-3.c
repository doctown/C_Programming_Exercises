
/********************************************************************/
/* Ex4-3 - Computes the area and perimeter of a rectangle.	    */
/* 								    */
/* Author: David Ogor						    */
/* Revisions:							    */
/*        Date:     Desctription:				    */
/*        4/28/2015 Create program				    */
/* 								    */
/* Purpose: Determine the area and perimeter of a rectangle. */
/********************************************************************/
#include <stdio.h>

#define WIDTH 3 		/* width of the rectangle */
#define HEIGHT 5		/* height of the rectangle */

/**
 *  Print the area and perimeter.
*/
int main(int argc, char *argv[]) {
  printf("Area: %2d\n", WIDTH * HEIGHT);
  printf("Perimeter: %2d\n", (2 * WIDTH) + (2 * HEIGHT)); 
  /* To change the height, the macro must be changed and the format specifier to %f */
  return 0;
}
