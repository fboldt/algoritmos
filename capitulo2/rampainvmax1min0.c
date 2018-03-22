#include <stdio.h>
#include <math.h>
float rampa(float x) {
  return (x+fabs(x))/2;
}
float rampainv(float x) {
  return (x-fabs(x))/2;
}
float rampainvmax1min0(float x) {
  return rampa(rampainv(x)+1);
}
int main() {
  printf("f(%f) = %f\n", -1.0, rampainvmax1min0(-1));
  printf("f(%f) = %f\n", -0.5, rampainvmax1min0(-0.5));
  printf("f(%f) = %f\n", 0.0, rampainvmax1min0(0));
  return 0;
}
