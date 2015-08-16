#include <stdio.h>

int main() {
  int m, n, t;
  char buf[10], c;
  
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d %c %d", &m, &c, &n);
  
  switch (c) {
  case '*':
    t = m * n;
    break;
   case '+':
    t = m + n;
    break;
  case '-':
    t = m - n;
    break;
  default:
    t = m / n;

  }
  
  printf("%d\n", t);
  return 0;
}
