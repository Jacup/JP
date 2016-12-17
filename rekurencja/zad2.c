#include<stdio.h>
int newton(int n, int k) {
  if ( (k==0) || (k==n) ) return 1;
  else return newton(n-1, k-1)+newton(n-1, k);

}
int main() {
  int n, k;
  printf("Podaj n i k: ");
  scanf("%d %d",&n, &k);
  printf("%d\n", newton(n, k));
  return 0;
}
