#include <stdio.h>

int silnia(int n) {
  int wynik=0;
  for (int i = 1; i <= n ; i++) {
    wynik=wynik+i;
  }
  return wynik;
}
int main() {
  printf("Silnia z 10 pierwszych liczb naturalnych:\n\n");
  for (int m = 1; m <= 10; m++)
  printf("%d! = %d\n", m, silnia(m));
}
