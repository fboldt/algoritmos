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
void crescente4facil(float *x1, float *x2, float *x3, float *x4) {
  crescente3facil(x1,x2,x3);
  crescente3facil(x2,x3,x4);
  crescente3facil(x1,x2,x3);
}
void crescente5facil(float *x1, float *x2, float *x3, float *x4, float *x5) {
  crescente3facil(x1,x2,x3);
  crescente3facil(x3,x4,x5);
  crescente3facil(x1,x2,x3);
}
int main(){
  float x1, x2, x3, x4, x5;
  int i=1;
  printf("n%d: ",i++);
  scanf("%f", &x1);
  printf("n%d: ",i++);
  scanf("%f", &x2);
  printf("n%d: ",i++);
  scanf("%f", &x3);
  printf("n%d: ",i++);
  scanf("%f", &x4);
  printf("n%d: ",i++);
  scanf("%f", &x5);
  crescente5facil(&x1,&x2,&x3,&x4,&x5);
  printf("%f %f %f %f %f\n", x1, x2, x3, x4, x5);
  return 0;
}
