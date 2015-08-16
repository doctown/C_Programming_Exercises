/**************************************************************/
/* Ex8-5 - Determines if a character is a vowel or consonant. */
/* 							      */
/* Author: David Ogor					      */
/* Date: 07-14-15					      */
/**************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/* 
 * Determines if character is a vowel.
 * param: c a letter
 * Returns true if character is a vowel.
 */
bool is_vowel(char c) 
{
  bool vowel = false; 		/* true if char is vowel */

  switch (c) {
  case 'a':
    /* Fall through */
  case 'e':
    /* Fall through */
  case 'i':
    /* Fall through */
  case 'o':
    /* Fall through */
  case 'u':
    vowel = true;
    break;
  default:
    vowel = false;
  }
  
  return vowel;
}

int main(int argc, char *argv[]) 
{
  int c = ' ';
  
  printf("Enter letter: ");
  while((c = getchar()) != EOF) {
    if (isspace(c)) {
      continue;
    }

    if (isalpha(c)) {
      printf("%s\n", (is_vowel(c)) ? "vowel" : "consonant");
    } else {
      printf("INVALID CHARACTER: letters only\n");
    }
  } 
  return 0;
}
