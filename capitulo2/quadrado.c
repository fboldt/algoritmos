#include <stdio.h>
float quadrado(float x) {
  return x*x;
}
int main() {
  float x = -2;
  printf("f(%f) = %f", x, quadrado(x));
  x = 2;
  printf("f(%f) = %f", x, quadrado(x));
  return 0;
}