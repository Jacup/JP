#include <stdio.h>
int main() {
int x;
printf("Podaj liczbe calkowita\n");
scanf("%d", &x);
if ( x > 5 )
  printf("Liczba %d jest wieksza od 5\n", x);
 else if ( x == 5 )
  printf("Liczba %d jest rowna 5\n", x);
else
  printf("Liczba %d jest mniejsza od 5\n", x);
return 0;
}
