#include <stdio.h>
int NWD(int a, int b)
{
    if(b!=0)
      return NWD(b,a%b);
  return a;
}
int main() {
  NWD(10, 20);

}
