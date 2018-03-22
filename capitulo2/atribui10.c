#include <stdio.h>
void atribui10(float *x) {
  *x = 10;
}
int main() {
  float a=2;
  printf("a=%f\n", a);
  atribui10(&a);
  printf("a=%f\n", a);
  return 0;
}