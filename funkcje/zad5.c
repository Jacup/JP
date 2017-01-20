#include <stdio.h>
void square(int h, int w){
  for(int i = 0; i < w; i++)  printf("*");    //linia pozioma gorna
  printf("\n");
  for (int i = 0; i < h-2; i++) {
    printf("*");
    for(int j = 2; j < w; j++)  printf(" ");  //wypelnienie
    printf("*\n");
  }
  for(int i = 0; i < w; i++)  printf("*");    //linia pozioma dolna

  printf("\n");
}
void circle(int h, int w){}
void arrow(int h, int w){}
void diamond(int h, int w){}

int main(){
  int h, w;
  printf("Podaj wysokosc i szerokosc:");
  scanf("%d %d", &h, &w);
  square(h,w);
}
