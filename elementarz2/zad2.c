#include <stdio.h>
int main ()
{
  int n, i;
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
  {
    printf("ERROR! Liczba %d nie jest ani pierwsza, ani zlozona\n", n);
    return 1;
  }
  else
  for ( i = 2; i < n; i++)
  {
    if ( n % i == 0 )
    {
      printf("Liczba %d jest liczba zlozona.\n", n);
      return 1;
    }
  }
  printf("Liczba %d jest liczba pierwsza\n", n );


  return 0;
}







/*
#include <stdio.h>
int main() {
int n;
printf("Podaj liczbe calkowita: ");
scanf("%d\n", &n);
if (n == 0 || n == 1 )
printf("ERROR! Liczba %d nie jest ani pierwsza, ani zlozona\n", n);
else if ( n % 2 == 0 && n % 3 == 0)
printf("Liczba %d jest liczba zlozona.\n", n);
else if ( n == 2 || n % 2 != 0  )
printf("Liczba %d jest liczba pierwsza\n", n);


return 0;
}
*/
