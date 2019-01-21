#include "plot2d.c" 

double identity(double x){
  return x;
}
int main(){
  plot2d(identity);
  return 0;
}
