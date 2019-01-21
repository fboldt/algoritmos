#include "plot2d.c" 

double identity(double x){
  return x;
}

double square(double x){
  return x*x;
}

int main(){
  plot2d(square);
  return 0;
}
