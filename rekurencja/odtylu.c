#include<stdio.h>
void odtylu() {
  char c;
  while( (c=getchar()) !=EOF) {odtylu(); printf("%s\n",c );; }
}
int main() {
odtylu();
printf("\n");
  return 0;
}
