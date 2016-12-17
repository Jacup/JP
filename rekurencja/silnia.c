#include<stdio.h>
int silnia (int n) {
  if (n==1) return 1;
  else return silnia(n-1)*n;
}
int main() {
  int a;
  printf("Podaj a: ");
  scanf("%d", &a );
  printf("silnia z %d wynosi %d\n",a, silnia(a) );
  return 0;
}
