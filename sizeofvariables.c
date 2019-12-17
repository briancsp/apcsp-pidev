#include<stdio.h>

int main()
{
  int a = 545;
  float b = 12.2;
  double c = 244.35;
  char d = 'x';
  unsigned int e = 3;
  long double f = 3.00001;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("float b value: %f and size: %d bytes\n",b, sizeof(b));
  printf("double c value: %f and size: %d bytes\n",c, sizeof(c));
  printf("char d value: %c and size: %d bytes\n",d, sizeof(d));
  printf("unsigned int e value: %d and size: %d bytes\n",e, sizeof(e));
  printf("long double f value: %f and size: %d bytes\n",f, sizeof(f));
}

