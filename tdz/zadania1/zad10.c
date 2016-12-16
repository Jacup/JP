#include <stdio.h>
#include <math.h>
int main() {
  int x, suma=0;
  printf("Podaj liczbe calkowita wieksza od 2: ");
  scanf("%d", &x);
  if ( x>2) {
    for (int i = 1; i <= x; i++) {
      suma=suma+pow(i, 2);
    }
    printf("Suma kwadratow liczb od 1 do %d wynosi %d\n",x, suma );
  }
  else
    printf("\t--==ERROR==--\n--==Podana liczba nie jest wieksza od 2.==--\n");
return 0;
}
