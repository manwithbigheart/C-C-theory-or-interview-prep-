#include <stdio.h>

void update(int *n)
{
  *n = *n + 10;
}

int main()
{
  int a = 5;
  update(&a);            // pass address
  printf("a = %d\n", a); // now 15
  return 0;
}
