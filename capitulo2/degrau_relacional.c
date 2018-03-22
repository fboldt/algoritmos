#include <stdio.h>
float degrau(float x) {
  return x>0;
}
int main() {
  printf("f(%f) = %f\n", -0.00000000001, degrau(-0.00000000001));
  printf("f(%f) = %f\n", 0.0, degrau(0));
  printf("f(%f) = %f\n", 0.00000000001, degrau(0.00000000001));
  return 0;
}