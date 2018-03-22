#include <stdio.h>
#include <math.h>
float rampa(float x) {
  return (x+fabs(x))/2;
}
float rampainv(float x) {
  return (x-fabs(x))/2;
}
float degrau(float x) {
  const float aproxim = 0.000000000000000000001;
  return rampa(rampainv(x)+aproxim)/aproxim;
}
int maior(float x, float y) {
  return degrau(x-y);
}
float maior2(float x, float y){
  return x*maior(x,y)+y*maior(y,x)-x*maior(x,y)*maior(y,x);
}
float maior3(float x1, float x2, float x3) {
  return maior2(maior2(x1,x2),x3);
}
float menor2(float x, float y){
  return x*maior(y,x)+y*maior(x,y)-x*maior(x,y)*maior(y,x);
}
void decrescente2(float x1, float x2) {
  printf("%f %f\n", maior2(x1, x2), menor2(x1, x2));
}
int main() {
  printf("\n\tTestando 'maior'.\n");
  printf("%f > %f ==> %d\n", 5.0, 4.0, maior(5,4));
  printf("%f > %f ==> %d\n", 5.0, 6.0, maior(5,6));
  printf("\n\tTestando 'maior2'.\n");
  printf("%f > %f ==> %f\n", 5.0, 4.0, maior2(5,4));
  printf("%f > %f ==> %f\n", 5.0, 6.0, maior2(5,6));
  printf("%f > %f ==> %f\n", 5.0, 5.0, maior2(5,5));
  printf("\n\tTestando 'maior3'.\n");
  printf("%f, %f, %f ==> %f\n", 5.0, 4.0, 6.0, maior3(5,4,6));
  printf("%f, %f, %f ==> %f\n", 5.0, 6.0, 4.0, maior3(5,6,4));
  printf("%f, %f, %f ==> %f\n", 6.0, 5.0, 5.0, maior3(6,5,5));
  printf("\n\tTestando 'menor2'.\n");
  printf("%f > %f ==> %f\n", 5.0, 4.0, menor2(5,4));
  printf("%f > %f ==> %f\n", 5.0, 6.0, menor2(5,6));
  printf("%f > %f ==> %f\n", 5.0, 5.0, menor2(5,5));
  printf("\n\tTestando 'descrencente2'.\n");
  printf("decrescente2(1,2); ");
  decrescente2(1,2);
  printf("decrescente2(2,1); ");
  decrescente2(2,1);
  return 0;
}