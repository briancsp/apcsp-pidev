#include <stdio.h>

float findarea(float radius) {

  float area = (radius * radius * 3.14);
  return area;

}

int main(int argc, char* argv[]) {

  float a=0;
  float min=0;
  float max=0;

  sscanf(argv[1], "%f", &min);
  sscanf(argv[2], "%f", &max);

  if (min>max) {
  int temp = 0;
  temp = min;
  min = max;
  max = temp;
  }

  for (float r=min; r<=max; r++) {
    a=findarea(r);
    printf("The area of the circle with raidus %f is %f\n",r,a);
  }

}
