#include <stdio.h>
void crescente3(float x1, float x2, float x3) {
  float menor = x1*(x1==x2)*(x1==x3) + 
                x1*(x1<x2)*(x1<x3) + x1*(x1<x2)*(x1==x3) + x1*(x1==x2)*(x1<x3) +
                x2*(x2<x1)*(x2<x3) + x2*(x2<x1)*(x2==x3) + x3*(x3<x1)*(x3<x2);
  float maior = x1*(x1==x2)*(x1==x3) + 
                x1*(x1>x2)*(x1>x3) + x1*(x1>x2)*(x1==x3) + x1*(x1==x2)*(x1>x3) +
                x2*(x2>x1)*(x2>x3) + x2*(x2>x1)*(x2==x3) + x3*(x3>x1)*(x3>x2);
  float medio = x1*(x1==x2)*(x1==x3) +
                x1*(x1>x2)*(x1<x3) + x1*(x1<x2)*(x1>x3) + x2*(x2>x1)*(x2<x3) +
                x2*(x2<x1)*(x2>x3) + x3*(x3>x1)*(x3<x2) + x3*(x3<x1)*(x3>x2) +
                x1*(x1==x2)*(x1<x3) + x1*(x1==x3)*(x1<x2) + x1*(x1==x2)*(x1>x3) +
                x1*(x1==x3)*(x1>x2) + x2*(x2==x3)*(x3<x2) + x2*(x2==x3)*(x3>x2);
  printf("%f %f %f\n", menor, medio, maior);
}