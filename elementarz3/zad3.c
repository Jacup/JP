// Program wyświetla tylko część trojkątów, wg wzoru pitagorasa.
// version 2 bedzie wyszukiwać wszystkie mozliwe. soon :D

#include <stdio.h>
#include <math.h>
int main ()
{
  int n=1 , x, a, b, c;
  while (x<992)
  {
    a = (2 * n + 1);
    b = (2 * n * (n + 1));
    c = 2 * pow(n, 2) + 2 * n + 1;
    x =  a + b + c;
    printf("Trojkat o bokach %d, %d i %d ma obwod rowny %dcm.\n",a ,b ,c , x );
    n++;
  }
  return 0;
}
