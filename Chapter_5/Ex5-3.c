/****************************************************/
/* Ex5-3 - Calculates the perimeter of a rectangle. */
/* 						    */
/* Author: David Ogor				    */
/* Date: 05-22-2015				    */
/* 						    */
/* Purpose: Practice inputs and computing numbers.  */
/****************************************************/
#include <stdio.h>

/*
 * Calculates the perimeter of a rectangle.
 *
 * params: height - height of the rectangle
 *         width - width of the rectangle
 * returns the perimeter of the rectangle.
 */
float getPerimeter(float const height, float const width) {
  return 2 * (width + height);
}

/*
 * Gets the height and width from the user.
 *
 * param: height - variable to store the height in.
 *        width - variable to store the width in.        
 */
void getInput(float *height, float *width)
{
  char buf[BUFSIZ];
  int results = 0;

  do {
    printf("Enter the height: ");
    fgets(buf, sizeof(buf), stdin);
    results  = sscanf(buf, "%f", height);
    printf("Enter the width: ");
    fgets(buf, sizeof(buf), stdin);
    results += sscanf(buf, "%f", width);
  } while (results != 2);
}

int main (int argc, char *argv[])
{
  float height = 0.0;
  float width = 0.0;
  getInput(&height, &width);
  printf("The perimeter is %.2f\n", getPerimeter(height, width));

  
  return 0;
}
