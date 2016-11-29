/* zlicz znaki odstępu, tabulacji
i nowego wiersza */
#include <stdio.h>
int main ()
{
  int c;
  int nb, nt, nl;
  nt = 0;
  nl = 0;
  nb = 0;
  printf("Program zliczajacy ilosc bialych znakow.\nWprowadz teskt.\n");
  while ((c=getchar()) != EOF)

    if (c == ' ')
      ++nb;
    else if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++nt;
printf("\n\nIlosc znakow spacji: %d\nIlosc nowych lini: %d\nIlosc tabulacji: %d\n", nb, nl, nt);

return 0;
}
