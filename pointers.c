#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);


  float d = 2.5;
  float e = 3.5;
  float temp;

  printf("\nd=%f and its address is %d.\ne=%f and its address is %d.\n",d,&d,e,&e);

  float* dpointer = &d;
  float* epointer = &e;

  temp = *epointer;
  *epointer = *dpointer;
  *dpointer = temp;

  printf("d is now %f and e is now %f\n",d,e);

}
