#include <stdio.h>
#include <math.h>
int main() {
  float x = -2;
  printf("f(%f) = %f\n", x, cos(x));
  x = 0;
  printf("f(%f) = %f\n", x, cos(x));
  x = 1;
  printf("f(%f) = %f\n", x, cos(x));
  x = 3.1415;
  printf("f(%f) = %f\n", x, cos(x));
  return 0;
}