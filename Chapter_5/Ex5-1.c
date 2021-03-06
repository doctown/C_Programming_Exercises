
/***********************************************/
/* Ex5-1 - Converts Centigrades to Fahrenheit. */
/* 					       */
/* Author: David Ogor			       */
/* Date: 05/11/2015			       */
/* 					       */
/* Purpose: Temperature converter.	       */
/* 					       */
/***********************************************/
#include <stdio.h>

/* 
 * Converts the temperature to fahrenheit.
 *
 * params: c tempratue in centigrades
 * returns the temperature in centigrades.
 */
float convert_to_f(float c)
{
  return ((9/5) * c) + 32;
}

int main(int argc, char *argv[])
{
  char line[100];
  float temp;
  
  do {
    printf("Enter tempertature: ");
    fgets(line, sizeof(line), stdin);
  } while (sscanf(line, "%f", &temp) != 1);
  
  printf("%.2f degrees C\n", convert_to_f(temp));

  return 0;
}
