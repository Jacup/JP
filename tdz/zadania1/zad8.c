#include <stdio.h>
#include <math.h>
int main() {
  int x;
  for (int i = 1; x < 1024; i++) {
    x=pow( 2, i );
    printf ("2^%d= %d\n", i, x );
  }
  return 0;
}
