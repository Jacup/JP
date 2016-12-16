#include <stdio.h>
int main() {
  int x;
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &x);
  if ( x>0 )
    printf("Podana liczba jest dodatnia\n");
  else if ( x<0 )
    printf("Podana liczba jest ujemna\n");
  else
    printf("Podana liczba jest rowna 0\n");
  return 0;
}
