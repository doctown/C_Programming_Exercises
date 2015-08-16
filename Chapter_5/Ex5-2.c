/****************************************************************/
/* Ex5-2 - Calculates the volume of a sphere.		        */
/* 							        */
/* Author: David Ogor					        */
/* Date: 5/21/2015					        */
/* 							        */
/* Purpose: Practice using floats and reading number from stdio */
/****************************************************************/

#include <math.h>
#include <stdio.h>

float getVolume(int const radius)
{
  return ((float) 4/3) * M_PI * pow(radius,3);
}

int main(int argc, char *argv[])
{
  float radius = 0.0;
  int results = 0;  
  char buf[BUFSIZ];

  do {
    printf("Enter radius: ");
    fgets(buf, sizeof(buf), stdin);
  } while ((results = sscanf(buf, "%f", &radius)) != 1);

  printf("Volume = %.2f\n", getVolume(radius));
  return 0;
}
