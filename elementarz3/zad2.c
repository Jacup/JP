#include <stdio.h>
#include <math.h>
int main ()
{
  double x=1;
  printf("Program wypisujacy pierwiastki z pierwszych 20 liczb naturalnych\n");
  while (x<=20)
  {
    printf("sqrt %1.0f = %2.2f\n", x, sqrt( x ));
    x++;
  }
  return 0;
}
