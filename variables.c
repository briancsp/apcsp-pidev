#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  printf("a is now %d and c is now %d\nSwitching now...\n", a, c);

  b = a;
  a = c;
  c= b;

  printf("a is now %d and c is now %d\n", a, c);
}
