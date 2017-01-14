#include <stdio.h>

int main () {
  char * x;
  FILE * fp;
  scanf("%s",x);
  fp = fopen("dane.dat","a");
  fprintf(fp,"%s\n",x );
  fclose(fp);
  return 0;
}
