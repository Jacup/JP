#include <stdio.h>
#include <math.h>

int power(int n, int k) {
  if (k==0)
    return 1;
  else
    return n=n*power(n, --k);
}
int main() {
  float n, k;
  printf("Podaj a oraz b\n");
  scanf("%f %f", &n, &k );
  printf("%d\n", power(n, k));
}
