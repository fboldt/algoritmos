#include <stdio.h>
#include <math.h>
float rampainv(float x) {
  return (x-fabs(x))/2;
}
float rampainvmax1(float x) {
  return rampainv(x)+1;
}
int main() {
  printf("f(%f) = %f\n", -1.0, rampainvmax1(-1));
  printf("f(%f) = %f\n", 0.0, rampainvmax1(0));
  printf("f(%f) = %f\n", 1.0, rampainvmax1(1));
  return 0;
}
