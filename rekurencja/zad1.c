#include <stdio.h>
#include <math.h>
int potega(int n, int k) {
  if (n==0) return 1;
  else return potega(n-1, k-1)*n;
}
int main() {
  int a=5, b=5;
//printf("Podaj n oraz k");
//scanf("%d %d",&n  , &k );
printf("%d\n ", potega(a, b) );
return 0;
}
