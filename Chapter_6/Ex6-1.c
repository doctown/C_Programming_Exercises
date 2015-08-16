/**********************************************************/
/* Ex6-1 - Find the distance between two points.	  */
/* 							  */
/* Author: David Ogor					  */
/* Date: 05/29/2015					  */
/* 							  */
/* Purpose: Practice loops and break/continue statements. */
/**********************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* represents a points x, y coordinates */
struct point{
  float x;
  float y;
};

/*
 * Calculate the distance between two points.
 *
 * params: a - a point
 *         b - another point
 * return the distance between the two points.
 */
float get_distance(struct point a, struct point b)
{
  float dist = 0;
  float x_dist = b.x - a.x;
  float y_dist = b.y - a.y;
  
  /* square each value and take the absolute value of the square root of the sum */
  dist = fabs(sqrt(pow(x_dist,2) + pow(y_dist, 2)));

  return dist;
}

/*
 * Read a line of input from the user until a float is entered.
 *
 * returns a floating point.
 */
float get_input()
{
  int res = 0;
  float point = 0.0;
  char buf[BUFSIZ];
  
  do {
    fgets(buf, BUFSIZ, stdin);
    res = sscanf(buf, "%f", &point);
  } while (res != 1);
  
  return point;
}
int main(int argc, char *argv[])
{
  int point_num = 1;
  float distance = 0.0;
  struct point a;
  struct point b;

  /* get the point from the user */
  printf("Enter the x-value of point #%d:", point_num);
  a.x = get_input();
  printf("Enter the y-value of point #%d:", point_num);
  a.y = get_input();
  ++point_num;

  printf("Enter the x-value of point #%d:", point_num);
  b.x = get_input();
  printf("Enter the y-value of point #%d:", point_num);
  b.y = get_input();
 
  distance = get_distance(a, b);
  printf("The distance is %.2f\n", distance);
  
  return 0;
}
