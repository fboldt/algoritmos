#include <stdio.h>
#include <math.h>
float rampa(float x) {
  return (x+fabs(x))/2;
}
int main() {
  printf("f(%f) = %f\n", -1.0, rampa(-1));
  printf("f(%f) = %f\n", 0.0, rampa(0));
  printf("f(%f) = %f\n", 1.0, rampa(1));
  return 0;
}
