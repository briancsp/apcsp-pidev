#include <stdio.h>

int main()
{
  int a = 0;
  int b = 2;
  int c = 2;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  if (b != 0)
  {
    printf("b is not 0\n");
  }
  else
  {
    printf("b is 0\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }

  if (c >= b)
  {
    printf("c is greater than or equal to b");
  }

  if (a < c)
  {
    printf("a is less than c\n");
  }

  if (b <= c)
  {
    printf("b is less than or equal to c\n");
  }

  if (a == 0 && b == 2)
  {
    printf("a is 0 and b is 2\n");
  }

  if (a == 1 || b >=c)
  {
    printf("a is 1 or b is greater than or equal to c\n");
  }

  if (!(a == b))
  {
    printf("a is not equal to b\n");
  }

}
