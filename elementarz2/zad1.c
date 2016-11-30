#include <stdio.h>
int main()
{
  int suma = 0, m, i = 1;
  printf("Podaj liczbe M: ");
  scanf("%i\n", &m);
  while (suma < m)
  {
    i = i + 1;
    suma = suma + i;
  }
  printf("Szukane n to: %d\n", i-1);
  return 0;
}

/* todo:
1) if input is letter = error
2) enter end scanf function */
