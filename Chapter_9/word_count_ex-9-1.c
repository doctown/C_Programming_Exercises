/********************************************************************/
/* Ex9-1 - Uses functions to count the number of words in a string. */
/* 								    */
/* Author: David Ogor						    */
/* Date: 07-23-2015						    */
/********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* 
 * Reads the line of input and counts a word as a text separated by a " ".
 *
 * Param: 
 *        str - a string
 * Returns the word count  or -1 on error.
 */
int count_words(char *str)
{
  int num_read = 0;		/* number of char read */
  int word_count = 0;
  int res = 0;			/* result of a function */
  char tword[100];	
	/* temporarily store a word */
  
  while (true) {
    res = sscanf(str, "%s%n", tword, &num_read);
    if (num_read == -1) {
      return -1;
    }
    
    if (res == EOF) {
      break;
    }       
    ++word_count;
    str += num_read;
  }

  return word_count;
}

int main(void)
{
  char line[1000];

  if ((fgets(line, sizeof(line), stdin)) == NULL) {
    perror("fgets");
    exit(1);
  }
  
  printf("Total number of words %d\n", count_words(line));

  return 0;
}
