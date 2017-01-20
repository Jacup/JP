#include<stdio.h>
int dosk(int x) {
  if ((x==6) || (x==28) || (x==496) || (x==8128) || (x==33550336) || (x==8589869056) || (x==137438691328) || (x==2305843008139952128 )) {
    printf("Liczba %d jest doskonala\n", x);
  }
  else
    printf("Liczba %d nie jest doskonala\n", x);
  return 0;

}
int main(){
  int a;
  printf("Podaj liczbe: ");
  scanf("%d", &a);
  dosk(a);
}
