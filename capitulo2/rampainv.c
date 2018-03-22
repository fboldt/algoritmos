#include <stdio.h>
#include <math.h>
float rampainv(float x) {
  return (x-fabs(x))/2;
}
int main() {
  printf("f(%f) = %f\n", -1.0, rampainv(-1));
  printf("f(%f) = %f\n", 0.0, rampainv(0));
  printf("f(%f) = %f\n", 1.0, rampainv(1));
  return 0;
}
