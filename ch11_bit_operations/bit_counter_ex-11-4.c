/********************************************/
/* Counts the number of bits in an integer. */
/* 					    */
/* Author: David			    */
/* Date: 08-18-15			    */
/********************************************/
#include <stdio.h>
#include <stdlib.h>

int count_bits(int number)
{
  int bit = 1;
  int cnt = 0;

  while (bit != 0) {
    if ((number & bit) == bit) {
      ++cnt;
    }
    bit = (bit << 1);
  }

  return cnt;
}

int main(int argc, char argv[])
{
  int res = 0; 			/* function results */
  char buf[100];
  int num = 0;

  printf("Enter a number: ");

  if (fgets(buf, sizeof(buf), stdin) == NULL) {
    perror("fgets");
    exit(1);
  }
  
  res = sscanf(buf, "%d", &num);
  if (res != 1) {
    fprintf(stderr, "Invalid input: %s \n \"a digit must be entered.\"\n", buf);
  } else {
    int bits = count_bits(num);
    printf("%d has %d %s in it\n", num, bits, (bits == 1) ? "bit" : "bits");
  }

  return 0;
}
