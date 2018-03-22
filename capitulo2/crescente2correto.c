#include <stdio.h>
void crescente2correto(float *a, float *b) {
  float x1 = *a, x2 = *b;
  float menor = x1*(x1<=x2)+x2*(x1>x2);
  float maior = x1*(x1>=x2)+x2*(x1<x2);
  *a = menor;
  *b = maior;
}
int main(){
  float x1=3, x2=2;
  printf("x1=%f x2=%f\n", x1, x2);
  crescente2correto(&x1,&x2);
  printf("x1=%f x2=%f\n", x1, x2);
  return 0;
}