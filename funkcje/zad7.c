#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void tru() {
  int t;
  {t=(rand() % 3)+1;}
  switch ( t ) {
    case 1: printf("\tBardzo dobrze! \n"); break;
    case 2: printf("\tSwietnie ! \n"); break;
    case 3: printf("\tDobra robota! \n"); break;
    default : printf("\tError. Skontaktuj sie z administratorem.\n"); break;
  }
}
void fals() {
  int f;
  {f=(rand() % 2)+1;}
  switch ( f ) {
    case 1: printf("\tZla odpowiedz :( \n"); break;
    case 2: printf("\tOj, niedobrze \n"); break;
    default : printf("\tError. Skontaktuj sie z administratorem.\n"); break;
  }
}
void calc(int tans[]) {
  int ans, a, b;
  srand(time(NULL));
  {a=(rand() % 10)+1;}
  {b=(rand() % 10)+1;}
  printf("%d * %d = ", a, b);
  scanf("%d", &ans);
  if (ans == (a * b)) {
    tans[1]++;
    tru();
  }
  else {
    tans[0]++;
    fals();
  }
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
