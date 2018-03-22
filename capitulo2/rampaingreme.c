#include <stdio.h>
#include <math.h>
float rampa(float x) {
  return (x+fabs(x))/2;
}
float rampainv(float x) {
  return (x-fabs(x))/2;
}
float rampaingreme(float x) {
  const float aproxim = 0.5;
  return rampa(rampainv(x)+aproxim)/aproxim;
}
int main() {
  printf("f(%f) = %f\n", -1.0, rampaingreme(-1));
  printf("f(%f) = %f\n", -0.5, rampaingreme(-0.5));
  printf("f(%f) = %f\n", 0.0, rampaingreme(0));
  printf("f(%f) = %f\n", 0.5, rampaingreme(0.5));
  return 0;
}
