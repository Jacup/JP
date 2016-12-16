//do przeanalizowania

#include <stdio.h>
int main() {
  char c;
  int znaki[256],z, y;
  for(y = 0; y < 257; y++) znaki[y] = 0;
  while ((c=getchar()) != EOF) {
    z = c;
    if ((z > 31 && z < 127) || c == '\t' || c == '\n')
    znaki[z]++;
  }
  printf("ZNAK\tLICZBA ZNAKOW\n____________________\n");
  for(int i = 0; i < 257; i++) {
    if (znaki[i] > 0) { c = i;
      if (c == ' ')
        printf("space");
      else if(c == '\t')
        printf("\\t");
      else if(c == '\n')
        printf("\\n");
      else
        printf("%c", c);
        printf("\t%d\t", znaki[i]);
      for(int j = 0; j < znaki[i]; j++)
        printf("*");
        printf("\n");
    }
  }
}
