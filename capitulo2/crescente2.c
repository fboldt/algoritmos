#include <stdio.h>
void crescente2(float x1, float x2) {
  float menor = x1*(x1<=x2)+x2*(x1>x2);
  float maior = x1*(x1>=x2)+x2*(x1<x2);
  printf("%f %f\n", menor, maior);
}
int main(){
  printf("crescente2(3,2); ");
  crescente2(3,2);
  printf("crescente2(3,4); ");
  crescente2(3,4);
  return 0;
}