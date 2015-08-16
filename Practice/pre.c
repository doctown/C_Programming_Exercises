#include <stdio.h>

#define p(N) printf(#N " %d\n", N)
#define TEXT "Employee "
#define t(text) puts(TEX ## text)

int main(int argc, char *args[]) {

  int d = 4;
  p(d);
  t(T);

  return 0;
}
