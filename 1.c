#include <stdio.h>

void zam(int *a, int *b);
int main()
{
  int a = 1;
  int b = 10;
  printf("Prije funkcije %d %d ", a, b);
  zam( &a, &b);
  printf("Nakon funkcije %d %d ", a, b);
  return 0;
}


void zam(int *a, int *b)
{
  int t;
  t = *a; *a = *b; *b = t;
}
