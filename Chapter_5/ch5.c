/*******************************************************************/
/* ch5 - Arrays and reading input				   */
/* Author: David Ogor						   */
/* Date: 04/07							   */
/* 								   */
/* Purpose: Practice using arrays and reading input from the user. */
/*******************************************************************/

#include <stdio.h>

/* 
 * Read a number from stdin using sscanf.
 */
void read_input()
{
  char line[100];
  int num1 = 0;
  int num2 = 0;
  int results = 0;
  
  do {
    fgets(line, sizeof(line), stdin);
    results = sscanf(line, "%d %d", &num1, &num2);
  } while (results != 2);
  printf("Numbers: \t%d\t%d\n", num1, num2);
}

/* 
 * Assign a string to a char.
 */
void assign_string()
{
  char name[5] = "bob";
  
  printf("s:%s\n",name,name);
}

int main(int argc, char *argv[])
{
  //read_input();
  assign_string();
  
  int num[2][2];
  num[0][1] = 1;

  return 0;

}
