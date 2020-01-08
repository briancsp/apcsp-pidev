#include <stdio.h>

float findarea(float radius) {

  float area = (radius * radius * 3.14);
  return area;

}

int main() {

  float a=0;
  for (float r=3.5; r<13; r++) {
    a=findarea(r);
    printf("The area of the circle with raidus %f is %f\n",r,a);
  }

}
