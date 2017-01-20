#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void calc(int tans[]) {
  int ans, a, b;
  srand(time(NULL));
  {a=(rand() % 10)+1;}
  {b=(rand() % 10)+1;}
  printf("%d * %d = ?\n", a, b);
  scanf("%d", &ans);
  if (ans == (a * b))
  tans[1]++;
  else
  tans[0]++;
}


int main(){


  int tans[2]={0, 0};
for (int i = 1; i <= 5; i++) {
 printf("\nPytanie numer %d.\n", i);
 calc(tans);
}
  printf("\nIlosc dobrych odpowiedzi: %d\n", tans[1]);
  printf("Ilość złych odpowiedzi: %d\n", tans[0]);
}
