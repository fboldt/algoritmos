#include <stdio.h>
void troca(float *x, float *y) {
  float aux = *x;
  *x = *y;
  *y = aux;
}
int main() {
  float a=1, b=2;
  printf("a=%f b=%f\n", a, b);
  troca(&a, &b);
  printf("a=%f b=%f\n", a, b);
  return 0;
}