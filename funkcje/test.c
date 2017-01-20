#include <stdio.h>
void skaluj(int liczba, int skala) {
  /* wypisz liczbę w podanej skali */
}
int main (int argc, char *argv[]) {
  int l, w;
  if (argc == 2) {
    /* wypisywanie podanej liczby, skala = 1 */
    l = atoi(argv[1]);
    w = 1;
  } else if (argc == 3 ) {
    /* wypisywanie liczby ze podanym skalowaniem */
    l = atoi(argv[1]);
    w = atoi(argv[2]);
  }
  skaluj(w, l);
  return 0;
}
