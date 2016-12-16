#include <stdio.h>
#include <math.h>
int main() {
int suma=0;
  for (int i = 1; i <= 20; i++) {
    suma=suma+pow(i, 2);
  }
  printf("Suma kwadratow liczb od 1 do 20 wynosi %d\n",suma );
return 0;
}
