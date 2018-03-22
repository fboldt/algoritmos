#include <stdio.h>
void crescente2correto(float *a, float *b) {
  float x1 = *a;
  float x2 = *b;
  float menor = x1*(x1<=x2)+x2*(x1>x2);
  float maior = x1*(x1>=x2)+x2*(x1<x2);
  *a = menor;
  *b = maior;
}
void crescente3facil(float *x1, float *x2, float *x3) {
  crescente2correto(x1,x2);
  crescente2correto(x2,x3);
  crescente2correto(x1,x2);
}
int main(){
  float x1=3, x2=2, x3=1;
  printf("x1=%f x2=%f x3=%f\n", x1, x2, x3);
  crescente3facil(&x1,&x2,&x3);
  printf("x1=%f x2=%f x3=%f\n", x1, x2, x3);
  return 0;
}
