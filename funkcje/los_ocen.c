#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int x, i;
  srand(time(NULL));
  for ( i = 1; i < 6; i++) {x=(rand() % 49)+1; printf(" %d", x); } printf("\n");
  x= (rand() % 4)+2;
  printf("x= %d\n", x);
  switch (x) {
    case 5: printf("pjona\n");
    break;
    case 4: printf("czwora\n");
    break;
    case 3: printf("troja\n");
    break;
    case 2: printf("nie zdales\n");
    break;
    default : printf("dupa\n");
  }
  return 0;


}
