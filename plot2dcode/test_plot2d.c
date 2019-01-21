#include "plot2d.h" 

double identity(double x){
  return x;
}

double square(double x){
  return x*x-3;
}

int main(){
  plot2d(square);
  return 0;
}
