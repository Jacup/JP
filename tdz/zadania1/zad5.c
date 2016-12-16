#include <stdio.h>
int main() {
  int x, y;
  printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &x);
  printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &y);
  if ( x == y )
    printf("\tPodane liczby sa rowne!\n");
  else if ( x > y)
    printf("\tPierwsza liczba jest wieksza!\n");
  else
    printf("\tPierwsza liczba jest mniejsza!\n");
  return 0;
}
