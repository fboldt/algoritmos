#include <stdio.h>
void crescente2errado(float x1, float x2) {
  float menor = x1*(x1<=x2)+x2*(x1>x2);
  float maior = x1*(x1>=x2)+x2*(x1<x2);
  x1 = menor;
  x2 = maior;
}
int main(){
  float x1=3, x2=2;
  printf("x1=%f x2=%f\n", x1, x2);
  crescente2errado(x1,x2);
  printf("x1=%f x2=%f\n", x1, x2);
  return 0;
}