#include <stdio.h>
#include <math.h>
int main(void) {
  float x;
  printf("Digite um numero positivo: ");
  scanf("%f", &x);
  printf("A raiz quadrada de %f eh %f\n", x, sqrt(x));
  return 0;
}
