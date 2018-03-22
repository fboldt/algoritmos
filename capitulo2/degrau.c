#include <stdio.h>
#include <math.h>
float rampa(float x) {
  return (x+fabs(x))/2;
}
float rampainv(float x) {
  return (x-fabs(x))/2;
}
float degrau(float x) {
  const float aproxim = 0.000000000000000000001;
  return rampa(rampainv(x)+aproxim)/aproxim;
}
int main() {
  printf("f(%f) = %f\n", -0.00000000001, degrau(-0.00000000001));
  printf("f(%f) = %f\n", 0.0, degrau(0));
  printf("f(%f) = %f\n", 0.00000000001, degrau(0.00000000001));
  return 0;
}