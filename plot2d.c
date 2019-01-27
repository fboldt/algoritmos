#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void plot2d(double (*function)(double), int domini, int domend) {
  const double step = 0.25;
  int *values, i, p, b, ymin=0, ymax=0;
  domini = (int)round(domini/step);
  domend = (int)round(domend/step);
  values = (int*)malloc(sizeof(int)*(domend-domini));

  for(i=domini; i<=domend; i++) {
    p = i-domini;
    values[p] = (int)(round(function(i*step)/step));
    if (values[p] < ymin) ymin = values[p];
    else if (values[p] > ymax) ymax = values[p];
  }

  for(i=ymax+1; i>=ymin-1; i--) {
    printf("%8.2f ",i*step);
    for(b=domini; b<=domend; b++) {
      if(i == values[b-domini]) 
        if(i==0) printf("O-");
        else printf("O ");
      else if(b == 0 && i == 0) printf("+-");
      else if(b == 0) printf("| ");
      else if(i == 0) printf("--");
      else printf("  ");
    }
    printf("\n");
  }

  printf("    ");
  for(i=domini; i<=domend; i+=4) printf("%8.2f", (i*step));
  printf("\n");
  free(values);
}

int main(){
  plot2d(cos,-3, 5);
  return 0;
}

