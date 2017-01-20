
#include<stdio.h>
#include<math.h>

double przeciwprostokatna(int a, int b) {
  double c = sqrt( pow(a, 2)+pow(b, 2)) ;
  return c;
}
void autom() {
  printf("\nTrojkat\t bok1\t bok2\t przeciwprostokatna\n-------------------------------------------\n");
  printf("%d\t %1.1lf\t %1.1f\t %3.3lf\n", 1, 3.0, 4.0, przeciwprostokatna(3,4) );
  printf("%d\t %1.1lf\t %1.1f\t %3.3lf\n", 2, 5.0, 5.0, przeciwprostokatna(5,5) );
  printf("%d\t %1.1lf\t %1.1f\t %3.3lf\n", 3, 1.0, 6.0, przeciwprostokatna(1,6) );
}
void man(){
  double x,y;
  printf("Podaj a oraz b\n");
  scanf("%lf %lf", &x, &y);
  printf("Trojkat\t bok1\t bok2\t przeciwprostokatna\n-------------------------------------------\n");
  printf("%d\t %1.1lf\t %1.1f\t %lf\n", 1, x, y, przeciwprostokatna(x,y) );
}

//PROGRAM GLOWNY
int main() {
  int tryb;
  printf("Program ma dwa tryby.\n1=automatyczna tabela\n2=liczenie przeciwprostokatnej\n");
  printf("\nWybierz tryb programu (1 / 2)\n");
  scanf("%d", &tryb);
  switch (tryb) {

    case 1: autom();
    break;

    case 2: man();
    break;

    default: printf("\t-= ERROR!! =-\nWybrano niewlasciwy tryb. Uruchom ponownie progam.\n");
    break;
  }
}
