#include <stdio.h>

int main()
{
  int n, silnia=1 ;
  printf("Podaj liczbe, z ktorej mam obliczyc silnie\n");
  scanf("%d", &n);
    if (n<0)
      printf("Wybierz wartość dodatnia! (max=10)\n");
    else if (n>10)
      printf("Wybrano za duza liczbe!\n");
    else
    {
      for(int i=n ; i>=1 ; i--)
      {
        silnia = silnia * i ;
      }
        printf("\n%d! = %d\n", n, silnia );
    }

  return 0;
}
