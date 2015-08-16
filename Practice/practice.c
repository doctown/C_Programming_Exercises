#include <stdio.h>

int next_value();

void test_continue()
{
  int x = 0;
  while (x < 10) {
    printf("%d", x);
    continue;
    ++x;
  }
}
/* Test default return value */
func()
{
  int x = 6;
  x++;
  return x;
}

int length(char string[])
{
  int idx;

  for (idx = 0; string[idx] != '\0'; ++idx)
    printf("%d\n", idx);

  return idx;

}
int main(int argc, char *argv[])
{
  char line[1000];

  fgets(line, sizeof(line), stdin);

  printf("Length of string %d\n", length(line));

  next_value();
  return 0;

}

int next_value(void) {
  return 1;
}
