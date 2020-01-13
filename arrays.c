#include <stdio.h>

int arrayAdd(int* arr, int s, int n) {
  for (int i=0;i<s;i++) {
    arr[i]=(arr[i]+n);
  }
  return *arr;
}

int main(void) {
  
  int arrSize = 100;

  int array[arrSize];
  for (int index = 0; index < arrSize; index++)
  {
    array[index]=index*index;
    printf("Value at index %d is %d\n",index,array[index]);
  }
  
  arrayAdd(array,arrSize,10000);
  
  printf("\n");

  for (int index = 0; index < arrSize; index++)
  {
    printf("Value at index %d is now %d\n",index,array[index]);
  }

  return 0;
}
