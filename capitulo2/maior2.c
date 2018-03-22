#include <stdio.h>
float maior2(float x, float y) {
  return x*(x>y) + y*(y>x) + x*(x==y);
}
int main() {
  printf("%f > %f ==> %f\n", 5.0, 4.0, maior2(5,4));
  printf("%f > %f ==> %f\n", 5.0, 6.0, maior2(5,6));
  printf("%f > %f ==> %f\n", 5.0, 5.0, maior2(5,5));
  return 0;
}