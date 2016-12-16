#include <stdio.h>
int main() {
  int x, y;
  printf("Podaj pierwsza liczbe calkowita: ");
  scanf("%d", &x);
  printf("Podaj druga liczbe calkowita: ");
  scanf("%d", &y);
  if ( x == y )
    printf("\tPodane liczby sa rowne!\n");
  else
    printf("\tPodane liczby nie sa rowne!\n");
  return 0;
}
