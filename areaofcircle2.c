#include <stdio.h>

float findarea(float radius) {

  float area = (radius * radius * 3.14);
  return area;

}

int main(int argc, char* argv[]) {

  float a=0;
  float min=0;
  float max=0;

  char input[256];

  if(argc==3) {
    sscanf(argv[1], "%f", &min);
    sscanf(argv[2], "%f", &max);
    }

  else {
    printf("Bounds not found. Please insert bounds.\nLower bound: \n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &min) == 1) break;
      printf("Insert a NUMBER\n");
    }
    printf("Upper bound: \n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &max) == 1) break;
      printf("Insert a NUMBER\n");
    }
  }

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
