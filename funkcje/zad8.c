#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
void los() {
  srand(time(NULL));
  {x=(rand() %1000)+1; printf(" %d\n", x); }
}



int x, a;
srand(time(NULL));
{x=(rand() %1000)+1; printf(" %d\n", x); }
  printf("Zgadnij jaka liczbe (1-1000) wybralem\n");
  scanf("%d", &a );
  if ( a==x )
    printf("BRAWO! Zgadles! Wylosowana liczba to %d\n", x);
  else if ( a<x ) {
    printf("Podana liczba jest za mala! Wybiesz wieksza!\n");
  }
  else if ( a>x ) {
       printf("Podana liczba jest za duza! Wybiesz mniejsza!\n");
  }
return 0;
}
