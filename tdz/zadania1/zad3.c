#include <stdio.h>
int main() {
int x;
printf("Podaj liczbe calkowita: ");
scanf("%d", &x);
if ( x%2==0 )
  printf("Liczba %d jest parzysta\n", x);
 else
  printf("Liczba %d nie jest parzysta\n", x);
return 0;
}
